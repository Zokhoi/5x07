/* Copyright 2022 Zokhoi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "5x07.h"
#include "print.h"

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {   0,  1,  2,  3,  4,  5,  6 },
  {   7,  8,  9, 10, 11, 12, 13 },
  {  14, 15, 16, 17, 18, 19, 20 },
  {  21, 22, 23, 24, 25, 26, 27 },
  {  28, 29, 30, 31, 32, 33, 34 },

  {  35, 36, 37, 38, 39, 40, 41 },
  {  42, 43, 44, 45, 46, 47, 48 },
  {  49, 50, 51, 52, 53, 54, 55 },
  {  56, 57, 58, 59, 60, 61, 62 },
  {  63, 64, 65, 66, 67, 68, 69 }
}, {
  // LED Index to Physical Position
  { 103,  0 }, {  86,  0 }, {  69,  0 }, {  52,  0 }, {  34,  0 }, {  17,  0 }, {   0,  0 },
  { 103, 16 }, {  86, 16 }, {  69, 16 }, {  52, 16 }, {  34, 16 }, {  17, 16 }, {   0, 16 },
  { 103, 32 }, {  86, 32 }, {  69, 32 }, {  52, 32 }, {  34, 32 }, {  17, 32 }, {   0, 32 },
  { 103, 48 }, {  86, 48 }, {  69, 48 }, {  52, 48 }, {  34, 48 }, {  17, 48 }, {   0, 48 },
  { 103, 64 }, {  86, 64 }, {  69, 64 }, {  52, 64 }, {  34, 64 }, {  17, 64 }, {   0, 64 },

  { 120,  0 }, { 138,  0 }, { 155,  0 }, { 172,  0 }, { 190,  0 }, { 207,  0 }, { 224,  0 },
  { 120, 16 }, { 138, 16 }, { 155, 16 }, { 172, 16 }, { 190, 16 }, { 207, 16 }, { 224, 16 },
  { 120, 32 }, { 138, 32 }, { 155, 32 }, { 172, 32 }, { 190, 32 }, { 207, 32 }, { 224, 32 },
  { 120, 48 }, { 138, 48 }, { 155, 48 }, { 172, 48 }, { 190, 48 }, { 207, 48 }, { 224, 48 },
  { 120, 64 }, { 138, 64 }, { 155, 64 }, { 172, 64 }, { 190, 64 }, { 207, 64 }, { 224, 64 }
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4,

  4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4
} };

void suspend_power_down_kb(void) {
  rgb_matrix_set_suspend_state(true);
  suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
  rgb_matrix_set_suspend_state(false);
  suspend_wakeup_init_user();
}

// void keyboard_pre_init_kb(void) {
//   dprintf("Begin kb pre init");
//   dprintf("End kb pre init");
// }

// void keyboard_post_init_kb(void) {
//   dprintf("Begin kb post init");
// //   dprintf("Trying to set hsv for master matrix");
// //   rgblight_sethsv_master(255, 255, 255);
// //   dprintf("Trying to set hsv for slave matrix");
// //   rgblight_sethsv_slave(255, 255, 255);
// //   dprintf("Complete setting hsv.");
//   dprintf("End kb post init");
// }

#endif
