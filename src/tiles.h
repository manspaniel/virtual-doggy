#ifndef TILESET_H
#define TILESET_H

// The tile bitmap data
const uint8_t TILESET [] PROGMEM = {
  0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xf0, 0xf0, 0x0e, 0xfe, 0x01, 0xff, 
  0x82, 0xfe, 0x84, 0xfc, 0x08, 0xf8, 0x08, 0xf8, 
  0x3e, 0xfe, 0xc1, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x04, 0xff, 0x08, 0xff, 0x10, 0xff, 0x12, 0xff, 
  0x04, 0xfc, 0x78, 0xf8, 0x90, 0xf0, 0x90, 0xf0, 
  0x50, 0x70, 0x50, 0x70, 0x20, 0x20, 0x00, 0x00, 
  0x20, 0xe0, 0x20, 0xe0, 0x20, 0xe0, 0x10, 0xf0, 
  0x10, 0xf0, 0x10, 0xf0, 0xc8, 0xf8, 0x38, 0x38, 
  0x00, 0xff, 0x00, 0xff, 0xf8, 0xff, 0x01, 0xff, 
  0x02, 0xff, 0x02, 0xff, 0x82, 0xff, 0x80, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 
  0x40, 0xc0, 0x38, 0xf8, 0x04, 0xfc, 0x18, 0xf8, 
  0x20, 0xe0, 0x10, 0xf0, 0x08, 0xf8, 0x04, 0xfc, 
  0x78, 0xf8, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x28, 0x28, 0x50, 0x50, 0x00, 0x00, 
  0x28, 0x28, 0x50, 0x50, 0x00, 0x00, 0x00, 0x00, 
  0x3e, 0x3e, 0xc1, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x04, 0xff, 0x08, 0xff, 0x10, 0xff, 0x12, 0xff, 
  0x3e, 0xfe, 0xc1, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x12, 0xff, 0x2c, 0xff, 0x18, 0xff, 0x0b, 0xff, 
  0x20, 0xe0, 0x20, 0xe0, 0x20, 0xe0, 0x20, 0xe0, 
  0x20, 0xe0, 0x40, 0xc0, 0x40, 0xc0, 0x40, 0xc0, 
  0x20, 0xe0, 0x20, 0xe0, 0x20, 0xe0, 0x18, 0xf8, 
  0x04, 0xfc, 0x78, 0xf8, 0x80, 0x80, 0x00, 0x00, 
  0x20, 0xe0, 0x20, 0xe0, 0x40, 0xc0, 0x40, 0xc0, 
  0x40, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x70, 0x70, 0x8c, 0xfc, 0xa2, 0xfe, 0x01, 0xff, 
  0x80, 0xff, 0x84, 0xff, 0x40, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x03, 0xff, 0x0c, 0xfc, 0x10, 0xf0, 
  0x60, 0x60, 0xd8, 0xf8, 0xd4, 0xfc, 0xb4, 0xfc, 
  0xab, 0xff, 0xaa, 0xfe, 0xac, 0xfc, 0x70, 0x70, 
  0x00, 0x00, 0x00, 0x00, 0xf9, 0xf9, 0x06, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x80, 0xff, 0x80, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0xc0, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x70, 0xff, 
  0x80, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0xff, 0x80, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x01, 0xff, 0x02, 0xfe, 
  0x04, 0xfc, 0x78, 0xf8, 0x90, 0xf0, 0x48, 0x78, 
  0x24, 0x3c, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 
  0xfc, 0xfc, 0x02, 0xfe, 0xff, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x80, 0xff, 0x80, 0xff, 
  0x24, 0x24, 0x5a, 0x7e, 0x81, 0xff, 0x81, 0xff, 
  0x42, 0x7e, 0x24, 0x3c, 0x24, 0x3c, 0x24, 0x3c, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x20, 0x3f, 
  0x20, 0x3f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 
  0x7f, 0x7f, 0x80, 0xff, 0x80, 0xff, 0x7f, 0x7f, 
  0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 
  0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 
  0x04, 0x07, 0x0a, 0x0f, 0x0a, 0x0f, 0x0e, 0x0f, 
  0x02, 0x03, 0x31, 0x31, 0x4e, 0x7f, 0x40, 0x7f, 
  0x40, 0x7f, 0x20, 0x3f, 0x1f, 0x1f, 0x00, 0x00, 
  0x44, 0x47, 0xaf, 0xef, 0x90, 0xff, 0x80, 0xff, 
  0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 
  0x40, 0x7f, 0x20, 0x3f, 0x1f, 0x1f, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x03, 0x03, 0x04, 0x07, 0x1f, 0x1f, 0x20, 0x3f, 
  0x20, 0x3f, 0x1f, 0x1f, 0x08, 0x0f, 0x08, 0x0f, 
  0x3e, 0xfe, 0xc9, 0xff, 0x41, 0xff, 0x41, 0xff, 
  0x22, 0xff, 0x22, 0xff, 0x22, 0xff, 0x27, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x08, 0x0f, 
  0x10, 0x1f, 0x13, 0x1f, 0x0c, 0x0c, 0x00, 0x00, 
  0x1f, 0x1f, 0x20, 0x3f, 0x40, 0x7f, 0x4f, 0x7f, 
  0x34, 0x37, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 
  0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 
  0x04, 0x07, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 
  0x02, 0x03, 0x01, 0x01, 0x06, 0x07, 0x08, 0x0f, 
  0x30, 0x3f, 0x40, 0x7f, 0x43, 0x7f, 0x3c, 0x3c, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x05, 0xfd, 
  0x02, 0xff, 0x02, 0xff, 0x82, 0xff, 0x80, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0x00, 0xf0, 0xf0, 0x0e, 0xfe, 0x01, 0xff, 
  0x02, 0xfe, 0x04, 0xfc, 0x08, 0xf8, 0x08, 0xf8, 
  0x00, 0x00, 0xf0, 0xf0, 0x0e, 0xfe, 0x81, 0xff, 
  0x42, 0xfe, 0x44, 0xfc, 0x88, 0xf8, 0x08, 0xf8, 
  0x3e, 0xff, 0xc1, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x10, 0xff, 0x08, 0xff, 0x0b, 0xff, 
  0x00, 0x00, 0xc0, 0xc0, 0x30, 0xf0, 0x08, 0xf8, 
  0x04, 0xfc, 0x04, 0xfc, 0x02, 0xfe, 0x02, 0xfe, 
  0x00, 0x00, 0xc0, 0xc0, 0x30, 0xf0, 0x08, 0xf8, 
  0x24, 0xfc, 0x14, 0xfc, 0x02, 0xfe, 0x02, 0xfe, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 
  0x40, 0xc0, 0x40, 0xc0, 0x80, 0x80, 0xc0, 0xc0, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0xff, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x3e, 0xfe, 0xc1, 0xff, 0x00, 0xff, 0x09, 0xff, 
  0x12, 0xff, 0x12, 0xff, 0x31, 0xff, 0x50, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x40, 0xff, 0x40, 0xff, 
  0x25, 0x3f, 0x25, 0x3f, 0x25, 0x3f, 0x24, 0x3f, 
  0x12, 0x1f, 0x12, 0x1f, 0x0f, 0x0f, 0x00, 0x00, 
  0x07, 0x07, 0x18, 0x1f, 0x20, 0x3f, 0x20, 0x3f, 
  0x20, 0x3f, 0x2e, 0x3f, 0x71, 0x7f, 0x42, 0x7f, 
  0x07, 0x07, 0x18, 0x1f, 0x20, 0x3f, 0x20, 0x3f, 
  0x20, 0x3f, 0x20, 0x3f, 0x70, 0x7f, 0x4c, 0x7f, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x42, 0xff, 0x24, 0xff, 0x18, 0xff, 
  0x18, 0xff, 0x24, 0xff, 0x42, 0xff, 0x00, 0xe9, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 
  0x60, 0xe0, 0x70, 0xf0, 0xe8, 0xf8, 0xec, 0xfc, 
  0x76, 0xfe, 0x6c, 0xfc, 0x70, 0xf0, 0xa0, 0xe0, 
  0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x60, 0xd0, 0xf0, 0xd0, 0xf0, 
  0xa0, 0xe0, 0x40, 0xc0, 0x40, 0xc0, 0x40, 0xc0, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0x00, 0x1e, 0x1e, 0x3d, 0x3f, 0x7b, 0x7f, 
  0x77, 0x7f, 0x77, 0x7f, 0x76, 0x7f, 0x76, 0x7f, 
  0x7b, 0x7f, 0x7b, 0x7f, 0x77, 0x7f, 0x77, 0x7f, 
  0x37, 0x3f, 0x1a, 0x1e, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x06, 0x06, 0x0f, 0x0f, 0x0f, 0x0f, 
  0x07, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x7e, 0xff, 0x7e, 0xff, 0x3c, 0xff, 0x18, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x7e, 0xff, 0x42, 0xff, 0x24, 0xff, 0x18, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x3c, 0xff, 0x42, 0xff, 0x5a, 0xff, 
  0x5a, 0xff, 0x5a, 0xff, 0x5a, 0xff, 0x5a, 0xff, 
  0x5a, 0xff, 0x5a, 0xff, 0x5a, 0xff, 0x5a, 0xff, 
  0x5a, 0xff, 0x5a, 0xff, 0x5a, 0xff, 0x5a, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x3c, 0xff, 0x42, 0xff, 0x42, 0xff, 
  0x42, 0xff, 0x42, 0xff, 0x42, 0xff, 0x42, 0xff, 
  0x42, 0xff, 0x42, 0xff, 0x42, 0xff, 0x42, 0xff, 
  0x42, 0xff, 0x42, 0xff, 0x42, 0xff, 0x42, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0xf0, 0xff, 0x18, 0xff, 
  0xec, 0xff, 0x34, 0xff, 0x14, 0xff, 0x14, 0xff, 
  0x14, 0xff, 0x14, 0xff, 0x14, 0xff, 0x14, 0xff, 
  0x14, 0xff, 0x14, 0xff, 0x14, 0xff, 0x14, 0xff, 
  0x14, 0xff, 0x34, 0xff, 0xe4, 0xff, 0x04, 0xff, 
  0xe4, 0xff, 0x34, 0xff, 0x14, 0xff, 0x14, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 
  0xff, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0xfe, 0xff, 0x04, 0xff, 0x08, 0xff, 
  0x10, 0xff, 0x20, 0xff, 0x40, 0xff, 0x80, 0xff, 
  0x00, 0xff, 0xfe, 0xff, 0xfc, 0xff, 0xf8, 0xff, 
  0xf0, 0xff, 0xe0, 0xff, 0xc0, 0xff, 0x80, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0xff, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 
  0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 
  0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 
  0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 
  0xff, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x08, 0xff, 0x08, 0xff, 0x04, 0xff, 0x04, 0xff, 
  0x02, 0xff, 0x02, 0xff, 0x01, 0xff, 0x01, 0xff, 
  0x00, 0xff, 0xfe, 0xff, 0x02, 0xff, 0x02, 0xff, 
  0x02, 0xff, 0x02, 0xff, 0x02, 0xff, 0x02, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0xff, 0xff, 0x81, 0xff, 0x81, 0xff, 0x81, 0xff, 
  0x81, 0xff, 0x81, 0xff, 0x81, 0xff, 0x81, 0xff, 
  0x81, 0xff, 0x81, 0xff, 0x81, 0xff, 0xff, 0xff, 
  0x81, 0xff, 0x81, 0xff, 0x81, 0xff, 0x81, 0xff, 
  0x81, 0xff, 0x81, 0xff, 0x81, 0xff, 0x81, 0xff, 
  0x81, 0xff, 0x81, 0xff, 0xff, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0x10, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x7f, 0xff, 0x40, 0xff, 0x40, 0xff, 0x40, 0xff, 
  0x40, 0xff, 0x40, 0xff, 0x40, 0xff, 0x40, 0xff, 
  0x40, 0xff, 0x40, 0xff, 0x40, 0xff, 0x7f, 0xff, 
  0x40, 0xff, 0x40, 0xff, 0x40, 0xff, 0x40, 0xff, 
  0x40, 0xff, 0x40, 0xff, 0x40, 0xff, 0x40, 0xff, 
  0x40, 0xff, 0x40, 0xff, 0x7f, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0x80, 0xff, 
  0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff
};

// Sprite: poop / 1x2 tiles / 8x16 pixels / tileset #0
const uint8_t poop [] PROGMEM = {
  0x00, 
  0x01, 
  0x02, 
  0x08, 
  0x10
};

// Sprite: stand_left / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t stand_left [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x01, 0x81, 0x00, 0x00, 
  0x09, 0x82, 0x0b, 0x0c, 
  0x11, 0x12, 0x13, 0x14, 
  0x19, 0x1a, 0x1b, 0x1c
};

// Sprite: poop_alt / 1x2 tiles / 8x16 pixels / tileset #0
const uint8_t poop_alt [] PROGMEM = {
  0x00, 
  0x01, 
  0x02, 
  0x48, 
  0x10
};

// Sprite: sitting / 10x4 tiles / 80x32 pixels / tileset #0
const uint8_t sitting [] PROGMEM = {
  0x00, 0x0a, 0x04, 
  0x01, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x09, 0x82, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x11, 0x12, 0x15, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x19, 0x1a, 0x1d, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Sprite: bone / 2x1 tiles / 16x8 pixels / tileset #0
const uint8_t bone [] PROGMEM = {
  0x00, 
  0x02, 0x01, 
  0x18, 0x98
};

// Sprite: stand_left_wag / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t stand_left_wag [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x01, 0x81, 0x00, 0x00, 
  0x09, 0x82, 0x0b, 0x04, 
  0x11, 0x12, 0x13, 0x14, 
  0x19, 0x1a, 0x1b, 0x1c
};

// Sprite: digging / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t digging [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x06, 0x07, 0x00, 0x00, 
  0x0e, 0x0f, 0x0b, 0x0c, 
  0x26, 0x12, 0x13, 0x14, 
  0x21, 0x1a, 0x1b, 0x1c
};

// Sprite: digging_2 / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t digging_2 [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x06, 0x07, 0x00, 0x00, 
  0x0e, 0x0f, 0x0b, 0x04, 
  0x26, 0x12, 0x13, 0x14, 
  0x19, 0x22, 0x1b, 0x1c
};

// Sprite: sitting_tongue / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t sitting_tongue [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x01, 0x81, 0x00, 0x00, 
  0x09, 0x8a, 0x0d, 0x00, 
  0x11, 0x12, 0x15, 0x16, 
  0x19, 0x1a, 0x1d, 0x1e
};

// Sprite: sitting_tongue_wag / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t sitting_tongue_wag [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x01, 0x81, 0x00, 0x00, 
  0x09, 0x8a, 0x0d, 0x00, 
  0x11, 0x12, 0x15, 0x03, 
  0x19, 0x1a, 0x1d, 0x1e
};

// Sprite: walk_facing_1 / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t walk_facing_1 [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x01, 0x81, 0x00, 0x00, 
  0x09, 0x82, 0x0b, 0x0c, 
  0x11, 0x12, 0x13, 0x14, 
  0x21, 0x1a, 0x1b, 0x24
};

// Sprite: walk_facing_2 / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t walk_facing_2 [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x01, 0x81, 0x40, 0x00, 
  0x09, 0x82, 0x0b, 0x04, 
  0x11, 0x12, 0x13, 0x14, 
  0x19, 0x22, 0x23, 0x1c
};

// Sprite: walk_forward_1 / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t walk_forward_1 [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x06, 0x07, 0x00, 0x00, 
  0x0e, 0x0f, 0x0b, 0x0c, 
  0x11, 0x12, 0x13, 0x14, 
  0x21, 0x1a, 0x1b, 0x24
};

// Sprite: walk_forward_2 / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t walk_forward_2 [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x06, 0x07, 0x40, 0x00, 
  0x0e, 0x0f, 0x0b, 0x04, 
  0x11, 0x12, 0x13, 0x14, 
  0x19, 0x22, 0x23, 0x1c
};

// Sprite: stand_bone / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t stand_bone [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x01, 0x81, 0x00, 0x00, 
  0x20, 0xa0, 0x0b, 0x0c, 
  0x11, 0x12, 0x13, 0x14, 
  0x19, 0x1a, 0x1b, 0x1c
};

// Sprite: sitting_front / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t sitting_front [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x00, 0x01, 0x81, 0x00, 
  0x00, 0x09, 0x89, 0x40, 
  0x00, 0x17, 0x97, 0x00, 
  0x00, 0x1f, 0x9f, 0x00
};

// Sprite: sitting_back / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t sitting_back [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x00, 0x28, 0xa8, 0x00, 
  0x00, 0x30, 0xb0, 0x40, 
  0x00, 0x30, 0xb0, 0x00, 
  0x00, 0x38, 0xb9, 0x00
};

// Sprite: sitting_back_2 / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t sitting_back_2 [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x00, 0x28, 0xa8, 0x00, 
  0x00, 0x30, 0xb0, 0x40, 
  0x00, 0x30, 0xb0, 0x00, 
  0x00, 0x39, 0xb8, 0x00
};

// Sprite: ball / 2x2 tiles / 16x16 pixels / tileset #0
const uint8_t ball [] PROGMEM = {
  0x00, 
  0x02, 0x02, 
  0x2c, 0xab, 
  0x6b, 0xeb
};

// Sprite: stand_left_weirdface / 4x4 tiles / 32x32 pixels / tileset #0
const uint8_t stand_left_weirdface [] PROGMEM = {
  0x00, 0x04, 0x04, 
  0x29, 0xa9, 0x00, 0x00, 
  0x31, 0xb1, 0x0b, 0x0c, 
  0x11, 0x12, 0x13, 0x14, 
  0x19, 0x1a, 0x1b, 0x1c
};

// Sprite: icon_food / 2x2 tiles / 16x16 pixels / tileset #1
const uint8_t icon_food [] PROGMEM = {
  0x01, 
  0x02, 0x02, 
  0x03, 0x83, 
  0x0b, 0x8b
};

// Sprite: icon_poop / 2x2 tiles / 16x16 pixels / tileset #1
const uint8_t icon_poop [] PROGMEM = {
  0x01, 
  0x02, 0x02, 
  0x01, 0x02, 
  0x09, 0x0a
};

// Sprite: ui_progress_empty / 3x2 tiles / 24x16 pixels / tileset #1
const uint8_t ui_progress_empty [] PROGMEM = {
  0x01, 0x03, 0x02, 
  0x18, 0x19, 0x98, 
  0x20, 0x21, 0xa0
};

// Sprite: ui_selection_arrow / 1x2 tiles / 8x16 pixels / tileset #1
const uint8_t ui_selection_arrow [] PROGMEM = {
  0x01, 
  0x01, 
  0x02, 
  0x11, 
  0x10
};

// Sprite: ui_menu_frame / 16x8 tiles / 128x64 pixels / tileset #1
const uint8_t ui_menu_frame [] PROGMEM = {
  0x01, 0x10, 0x08, 
  0x30, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x32, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0xb0, 
  0x38, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x78, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0xb8, 
  0x78, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 
  0x78, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 
  0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 
  0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 
  0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 
  0x70, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x72, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0xf0
};

// Sprite: sitting_food / 6x4 tiles / 48x32 pixels / tileset #0
const uint8_t sitting_food [] PROGMEM = {
  0x00, 0x06, 0x04, 
  0x00, 0x00, 0x01, 0x81, 0x00, 0x00, 
  0x00, 0x00, 0x09, 0x89, 0x0d, 0x00, 
  0x2e, 0xae, 0x11, 0x12, 0x15, 0x16, 
  0xb7, 0x37, 0x19, 0x1a, 0x1d, 0x1e
};

// Sprite: scene_room / 16x8 tiles / 128x64 pixels / tileset #2
const uint8_t scene_room [] PROGMEM = {
  0x02, 0x10, 0x08, 
  0x44, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0xc4, 
  0x00, 0x84, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0x04, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x81, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0x00, 0x09, 0x0a, 0x0b, 0x00, 0x05, 0x85, 0x00, 0x83, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0x00, 0x11, 0x12, 0x13, 0x00, 0x0d, 0x8e, 0x80, 0x83, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x41, 0x42, 0x42, 0x42, 0x42, 0x42, 0x15, 0x95, 0x42, 0xc1, 0x00, 0x00, 0x00, 
  0x08, 0xc4, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x8c, 0x00, 0x00, 0x84, 0x44, 0x00, 
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x84
};

// Sprite: square_test / 4x4 tiles / 32x32 pixels / tileset #2
const uint8_t square_test [] PROGMEM = {
  0x02, 0x04, 0x04, 
  0x01, 0x02, 0x02, 0x81, 
  0x0d, 0x00, 0x00, 0xcd, 
  0x0d, 0x00, 0x00, 0x8d, 
  0x41, 0x42, 0x42, 0xc1
};

#endif