/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

extern const uint8_t feedrate_32x32x4[512] = {
  0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x77, 0x78, 0x77, 0x77, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x77, 0x8A, 0xCD, 0xA8, 0xCC, 0xB9, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x77, 0x9C, 0xEF, 0xFF, 0xA8, 0xFF, 0xFF, 0xDA, 0x87, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x87, 0x8B, 0xEF, 0xFF, 0xFF, 0x97, 0xFF, 0xFF, 0xFF, 0xD9, 0x77, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x78, 0xCF, 0xFF, 0xFF, 0xEC, 0x76, 0xBD, 0xEF, 0xFF, 0xFF, 0x97, 0x78, 0x88, 0x88,
  0x88, 0x87, 0x8D, 0xFF, 0xFF, 0xC9, 0x65, 0x55, 0x65, 0x6A, 0xEF, 0xFB, 0x67, 0x87, 0x88, 0x88,
  0x88, 0x77, 0xCF, 0xFF, 0xE9, 0x55, 0x55, 0x55, 0x65, 0x55, 0x6B, 0xB5, 0x7D, 0xB7, 0x78, 0x88,
  0x87, 0x7A, 0xFF, 0xFE, 0x85, 0x55, 0x56, 0x67, 0x77, 0x66, 0x55, 0x57, 0xDF, 0xF8, 0x78, 0x88,
  0x87, 0x8E, 0xFF, 0xF8, 0x55, 0x56, 0x67, 0x88, 0x88, 0x87, 0x76, 0x58, 0xFF, 0xFC, 0x67, 0x88,
  0x77, 0xBF, 0xFF, 0xA5, 0x55, 0x67, 0x88, 0x88, 0x87, 0x78, 0xB9, 0x66, 0xBF, 0xFF, 0x86, 0x88,
  0x78, 0xDF, 0xFD, 0x65, 0x56, 0x78, 0x88, 0x87, 0x77, 0xAE, 0xD8, 0x77, 0x7E, 0xFF, 0xB5, 0x78,
  0x79, 0xFF, 0xFA, 0x55, 0x67, 0x88, 0x88, 0x77, 0x9C, 0xFF, 0x86, 0x56, 0x7B, 0xFF, 0xE6, 0x68,
  0x7A, 0xFF, 0xF7, 0x55, 0x78, 0x88, 0x87, 0x8B, 0xFF, 0xFB, 0x55, 0x67, 0x79, 0xFF, 0xF8, 0x68,
  0x7B, 0xFF, 0xE6, 0x56, 0x78, 0x88, 0x78, 0xDF, 0xFF, 0xE7, 0x55, 0x78, 0x79, 0xEE, 0xE8, 0x57,
  0x7C, 0xFF, 0xD6, 0x57, 0x88, 0x87, 0x7C, 0xFF, 0xFF, 0xA5, 0x56, 0x78, 0x78, 0x77, 0x76, 0x57,
  0x7C, 0xFF, 0xD6, 0x57, 0x88, 0x87, 0x7C, 0xFF, 0xFD, 0x65, 0x57, 0x88, 0x78, 0x98, 0x86, 0x57,
  0x7B, 0xFF, 0xD6, 0x57, 0x88, 0x88, 0x79, 0xEF, 0xE8, 0x55, 0x67, 0x88, 0x79, 0xFF, 0xF9, 0x67,
  0x7B, 0xFF, 0xF7, 0x57, 0x88, 0x88, 0x87, 0x78, 0x75, 0x55, 0x78, 0x88, 0x7A, 0xFF, 0xF8, 0x67,
  0x79, 0xFF, 0xF9, 0x57, 0x88, 0x88, 0x88, 0x65, 0x55, 0x56, 0x88, 0x87, 0x7C, 0xFF, 0xD6, 0x56,
  0x78, 0xEF, 0xFD, 0x57, 0x88, 0x88, 0x88, 0x76, 0x55, 0x67, 0x88, 0x87, 0x8F, 0xFF, 0xB5, 0x57,
  0x77, 0xBF, 0xFF, 0x96, 0x88, 0x88, 0x88, 0x88, 0x77, 0x78, 0x88, 0x77, 0xCF, 0xFF, 0x85, 0x67,
  0x87, 0x8E, 0xFF, 0xE8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x7A, 0xFF, 0xFC, 0x55, 0x67,
  0x88, 0x7A, 0xFF, 0xFD, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88, 0x77, 0x9E, 0xFF, 0xF7, 0x55, 0x68,
  0x88, 0x77, 0xBF, 0xFF, 0xEA, 0x77, 0x77, 0x88, 0x87, 0x77, 0x7A, 0xFF, 0xFF, 0x95, 0x56, 0x78,
  0x88, 0x87, 0x6C, 0xFF, 0xFF, 0xC9, 0x87, 0x77, 0x77, 0x89, 0xDF, 0xFF, 0xFB, 0x55, 0x56, 0x88,
  0x88, 0x88, 0x76, 0xCF, 0xFF, 0xFF, 0xDC, 0xBB, 0xBC, 0xEF, 0xFF, 0xFF, 0xA5, 0x55, 0x67, 0x88,
  0x88, 0x88, 0x86, 0x6A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE8, 0x55, 0x55, 0x78, 0x88,
  0x88, 0x88, 0x87, 0x65, 0x7B, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDA, 0x65, 0x55, 0x57, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x86, 0x55, 0x79, 0xBD, 0xDE, 0xDC, 0xB9, 0x65, 0x55, 0x56, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x76, 0x55, 0x56, 0x66, 0x66, 0x55, 0x55, 0x55, 0x67, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x87, 0x76, 0x55, 0x55, 0x55, 0x55, 0x56, 0x67, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x66, 0x66, 0x66, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88
};

#endif // HAS_GRAPHICAL_TFT
