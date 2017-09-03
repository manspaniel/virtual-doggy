#ifndef SPRITE_DISPLAY_H
#define SPRITE_DISPLAY_H

#include <stdlib.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include "ssd1306xled.h"
#include "tiles.h"

#define MAX_SPRITES               16
#define SPRITE_HEADER_SIZE        3

class SpriteDisplay;

struct Sprite {
  bool active = false;
  bool filtered = false;
  uint8_t tileset = 0;
  uint8_t * data;
  int x = 0;
  int y = 0;
  uint8_t width = 0;
  uint8_t height = 0;
  uint8_t cols = 0;
  uint8_t rows = 0;
  SpriteDisplay * display;
  
  int lastX = 0;
  int lastY = 0;
  uint8_t lastWidth = 0;
  uint8_t lastHeight = 0;
  
  bool hasRendered = false;
  bool needsUpdate = false;
};

class SpriteDisplay {
public:
  uint8_t * tileset;
  Sprite sprites[MAX_SPRITES];
  uint32_t dirtyCells[8];
  
  SpriteDisplay() {
    Sprite * sprite;
    for (uint8_t k = 0; k < MAX_SPRITES; k++) {
      sprite = &sprites[k];
      sprite->display = this;
    }
  }
  
  Sprite * addSprite (uint8_t * spriteData) {
    Sprite * sprite;
    for (uint8_t k = 0; k < MAX_SPRITES; k++) {
      sprite = &sprites[k];
      if (!sprite->active) {
        sprite->hasRendered = false;
        sprite->needsUpdate = true;
        sprite->active = true;
        sprite->data = spriteData;
        sprite->cols = pgm_read_byte(&spriteData[1]);
        sprite->rows = pgm_read_byte(&spriteData[2]);
        sprite->width = sprite->cols * 8;
        sprite->height = sprite->rows * 8;
        sprite->tileset = pgm_read_byte(&spriteData[0]);
        return &sprites[k];
      }
    }
    return NULL;
  }
  
  bool rectsOverlap (int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2) {
    return !(x1 + w1 < x2 || y1 + h1 < y2 || x1 > x2 + w2 || y1 > y2 + h2);
  }
  
  uint8_t getTileByte(Sprite * sprite, uint8_t x, uint8_t y, uint8_t shiftX, bool alpha) {
    
    // Grab the type reference byte, which contains flipX/flipY/ID
    uint8_t tileRef = pgm_read_byte(&sprite->data[SPRITE_HEADER_SIZE + y * sprite->cols + x]);
    
    // We flip?
    bool flipX = (tileRef & 0x80) == 0x80;
  	bool flipY = (tileRef & 0x40) == 0x40;
    
    // Calculate the index on the global tileset
    uint16_t tileIndex = sprite->tileset * 64 + (tileRef & 0x3f);
    
    // Read and return the cell byte, compensaiting for x offset
    uint8_t value = pgm_read_byte(&TILESET[tileIndex * 2 * 8 + (flipX ? 7 - shiftX : shiftX) * 2 + (alpha ? 1 : 0)]);
    
    if (flipY) {
      value = (value & 0xF0) >> 4 | (value & 0x0F) << 4;
      value = (value & 0xCC) >> 2 | (value & 0x33) << 2;
      value = (value & 0xAA) >> 1 | (value & 0x55) << 1;
    }
    
    return value;
    
  }
  
  /*
    Render a rectangle to the display
  */
  // void renderRect (int screenX, int screenY, int width, int height) {
  //
  //   for (int spriteID = 0; spriteID < MAX_SPRITES; spriteID++) {
  //     Sprite * sprite = &sprites[spriteID];
  //     sprite->filtered = rectsOverlap(screenX, screenY, width, height, sprite->x, sprite->y, sprite->width, sprite->height);
  //   }
  //
  //   for (uint8_t y = (screenY / 8) * 8; y < screenY + height; y += 8) {
  //     if (y / 8 == 8) continue;
  //     ssd1306_setpos(screenX, y / 8);
  //     ssd1306_send_data_start();
  //     for (uint8_t x = screenX; x < screenX + width; x++) {
  //       uint8_t color = 0;
  //       uint8_t alpha = 0;
  //       // Loop over each sprite which overlaps this rect
  //       for (int spriteID = 0; spriteID < MAX_SPRITES; spriteID++) {
  //         Sprite * sprite = &sprites[spriteID];
  //         if (!sprite->active) continue;
  //         if (sprite->y + sprite->height < y || sprite->y >= y + 8) continue;
  //         if (sprite->x + sprite->width <= x || sprite->x > x) continue;
  //
  //         // Offset is the distance between the current cell and the start of the sprite.
  //         // It's always positive
  //         int offsetX = x - sprite->x;
  //         int offsetY = y - sprite->y;
  //
  //         int shiftY = 0;
  //         int shiftX = offsetX % 8;
  //
  //         // We're currently in a screen cell, which is 1x8 pixels
  //         // We've already determined that the current sprite overlaps that cell in some way
  //         // Either 1 or 2 tiles of this sprite are overlapping
  //         // - 1 tile taking up the entire space, if this sprite is aligned by 8
  //         // - 1 tile, offset downwards, if sprite.y > y
  //         // - 1 tile, offset upwards, if sprite.y + sprite.height > y && sprite.y < y + 8
  //         // - or 2 tiles otherwise
  //         //  - in this case, the topmost
  //         bool showFirst = false;
  //         uint8_t firstCol = 0;
  //         uint8_t firstRow = 0;
  //
  //         bool showSecond = false;
  //         uint8_t secondCol = 0;
  //         uint8_t secondRow = 0;
  //
  //         if (sprite->y % 8 == 0) {
  //           // The sprite is aligned by 8 on the Y axis, so only one to show, and no y shifting needed
  //           showFirst = true;
  //           firstCol = offsetX / 8;
  //           firstRow = offsetY / 8;
  //           if (firstRow == sprite->rows) {
  //             showFirst = false;
  //           }
  //         } else if (sprite->y > y) {
  //           // The sprite starts further down in this cell
  //           showFirst = true;
  //           firstCol = offsetX / 8;
  //           firstRow = 0;
  //           shiftY = sprite->y % 8;
  //         } else if (sprite->y + sprite->height < y + 8) {
  //           // The sprite ends during this cell
  //           showSecond = true;
  //           secondCol = offsetX / 8;
  //           secondRow = sprite->rows - 1;
  //           shiftY = sprite->y % 8;
  //         } else {
  //           // Both!
  //           showFirst = true;
  //           firstCol = offsetX / 8;
  //           firstRow = offsetY / 8 + 1;
  //           shiftY = sprite->y % 8;
  //
  //           showSecond = true;
  //           secondCol = offsetX / 8;
  //           secondRow = offsetY / 8;
  //         }
  //
  //         uint8_t cellColor = 0;
  //         uint8_t cellAlpha = 0;
  //
  //         if (showFirst) {
  //           uint8_t a = getTileByte(sprite, firstCol, firstRow, shiftX, true);
  //           cellAlpha = cellAlpha | (a << shiftY);
  //           uint8_t b = getTileByte(sprite, firstCol, firstRow, shiftX, false);
  //           cellColor = cellColor | (b << shiftY);
  //           // cellAlpha = getTileByte(sprite, firstCol, firstRow, shiftX, true);
  //           // val = val | (cell << shiftY);
  //         }
  //         if (showSecond) {
  //           uint8_t a = getTileByte(sprite, secondCol, secondRow, shiftX, true);
  //           cellAlpha = cellAlpha | (a >> (8 - shiftY));
  //           uint8_t b = getTileByte(sprite, secondCol, secondRow, shiftX, false);
  //           cellColor = cellColor | (b >> (8 - shiftY));
  //         }
  //
  //         color = color | (~alpha & cellColor & cellAlpha);
  //         alpha = alpha | cellAlpha;
  //
  //       }
  //       ssd1306_send_byte(color);
  //     }
  //     ssd1306_send_data_stop();
  //   }
  // }
  
  void renderRect (int screenX, int screenY, int width, int height) {
    
  }
  
  void setDirtyRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h) {
    for (uint8_t row = y / 8; row < y / 8 + h / 8 + 1; row++) {
      for (uint8_t col = x / 4; col < x / 4 + w / 4; col++) {
        dirtyCells[row] = dirtyCells[row] | (1 << (col));
      }
    }
  }
  
  void update () {
    // Find the regions on the screen which need updating
    for (uint8_t k = 0; k < MAX_SPRITES; k++) {
      Sprite * sprite = &sprites[k];
      if (sprite->needsUpdate) {
        // Re-render where the sprite currently is
        setDirtyRect(sprite->x, sprite->y, sprite->width, sprite->height);
        
        // Also re-render where the sprite was
        if (sprite->hasRendered) {
          setDirtyRect(sprite->lastX, sprite->lastY, sprite->lastWidth, sprite->lastHeight);
        }
        
        // Mark as rendered
        sprite->lastX = sprite->x;
        sprite->lastY = sprite->y;
        sprite->lastWidth = sprite->width;
        sprite->lastHeight = sprite->height;
        sprite->hasRendered = true;
        sprite->needsUpdate = false;
      }
    }
    
    for (int y = 0; y < 8; y++) {
      // dirtyCells[y] = ~0;
    }
    
    // Render the dirty cells
    // Since dirtyCells is structured row > col, we iterate over rows first, so that we can skip entire clean rows
    uint8_t x = 0;
    uint8_t y = 0;
    for (uint8_t cellRow = 0; cellRow < 8; cellRow++) {
      // Skip this row, if there's nothing
      if (dirtyCells[cellRow] == 0) continue;
      
      // Mark the row as clean
      dirtyCells[cellRow] = 0;
      
      bool rendering = false;
      
      // Render the row, cell by cell (a cell being 4 bytes)
      for (uint8_t cellCol = 0; cellCol < 32; cellCol++) {
        // Skip this cell, if there's nothing
        if (dirtyCells[cellRow] & (1 << cellCol) == 0) {
          // Send the stop signal if we rendered the last cell
          if (rendering) {
            ssd1306_send_data_stop();
            rendering = false;
          }
          continue;
        }
        
        if (!rendering) {
          ssd1306_setpos(cellCol * 4, cellRow);
          ssd1306_send_data_start();
          rendering = true;
        }
        
        // Render 4 bytes for this cell
        // The display requires that each byte sent (1 byte = 8 x pixels)
        // is byte-aligned on the Y axis (0-7).
        // We group by 4 as a balancing act, so that the dirtyCells
        // grid isn't too big, but also the grid is small enough that\
        // we're not over-rendering too much.
        y = cellRow * 8;
        for (uint8_t cellN = 0; cellN < 4; cellN++) {
          x = cellCol * 4 + cellN;
          
          uint8_t color = 0;
          uint8_t alpha = 0;
          
          // Loop over each sprite which overlaps this rect
          for (int spriteID = 0; spriteID < MAX_SPRITES; spriteID++) {
            Sprite * sprite = &sprites[spriteID];
            if (!sprite->active) continue;
            if (sprite->y + sprite->height < y || sprite->y >= y + 8) continue;
            if (sprite->x + sprite->width <= x || sprite->x > x) continue;
            
            // Offset is the distance between the current cell and the start of the sprite.
            // It's always positive
            int offsetX = x - sprite->x;
            int offsetY = y - sprite->y;
            
            int shiftY = 0;
            int shiftX = offsetX % 8;
            
            // We're currently in a screen cell, which is 1x8 pixels
            // We've already determined that the current sprite overlaps that cell in some way
            // Either 1 or 2 tiles of this sprite are overlapping
            // - 1 tile taking up the entire space, if this sprite is aligned by 8
            // - 1 tile, offset downwards, if sprite.y > y
            // - 1 tile, offset upwards, if sprite.y + sprite.height > y && sprite.y < y + 8
            // - or 2 tiles otherwise
            //  - in this case, the topmost
            bool showFirst = false;
            uint8_t firstCol = 0;
            uint8_t firstRow = 0;
            
            bool showSecond = false;
            uint8_t secondCol = 0;
            uint8_t secondRow = 0;
            
            if (sprite->y % 8 == 0) {
              // The sprite is aligned by 8 on the Y axis, so only one to show, and no y shifting needed
              showFirst = true;
              firstCol = offsetX / 8;
              firstRow = offsetY / 8;
              if (firstRow == sprite->rows) {
                showFirst = false;
              }
            } else if (sprite->y > y) {
              // The sprite starts further down in this cell
              showFirst = true;
              firstCol = offsetX / 8;
              firstRow = 0;
              shiftY = sprite->y % 8;
            } else if (sprite->y + sprite->height < y + 8) {
              // The sprite ends during this cell
              showSecond = true;
              secondCol = offsetX / 8;
              secondRow = sprite->rows - 1;
              shiftY = sprite->y % 8;
            } else {
              // Both!
              showFirst = true;
              firstCol = offsetX / 8;
              firstRow = offsetY / 8 + 1;
              shiftY = sprite->y % 8;
              
              showSecond = true;
              secondCol = offsetX / 8;
              secondRow = offsetY / 8;
            }
            
            uint8_t cellColor = 0;
            uint8_t cellAlpha = 0;
            
            if (showFirst) {
              uint8_t a = getTileByte(sprite, firstCol, firstRow, shiftX, true);
              cellAlpha = cellAlpha | (a << shiftY);
              uint8_t b = getTileByte(sprite, firstCol, firstRow, shiftX, false);
              cellColor = cellColor | (b << shiftY);
              // cellAlpha = getTileByte(sprite, firstCol, firstRow, shiftX, true);
              // val = val | (cell << shiftY);
            }
            if (showSecond) {
              uint8_t a = getTileByte(sprite, secondCol, secondRow, shiftX, true);
              cellAlpha = cellAlpha | (a >> (8 - shiftY));
              uint8_t b = getTileByte(sprite, secondCol, secondRow, shiftX, false);
              cellColor = cellColor | (b >> (8 - shiftY));
            }
            
            color = color | (~alpha & cellColor & cellAlpha);
            alpha = alpha | cellAlpha;
            
          }
          
          // Send the byte!
          ssd1306_send_byte(color);
        }
      }
      
      // If we rendered the last cell of this row, don't forget to send the stop signal
      if (rendering) {
        ssd1306_send_data_stop();
      }
    }
  }
  
  void clear () {
  }
};

#endif