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

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the Leys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
  L06, L05, L04, L03, L02, L01, L00, R00, R01, R02, R03, R04, R05, R06, \
  L16, L15, L14, L13, L12, L11, L10, R10, R11, R12, R13, R14, R15, R16, \
  L26, L25, L24, L23, L22, L21, L20, R20, R21, R22, R23, R24, R25, R26, \
  L36, L35, L34, L33, L32, L31, L30, R30, R31, R32, R33, R34, R35, R36, \
  L46, L45, L44, L43, L42, L41, L40, R40, R41, R42, R43, R44, R45, R46  \
) \
{ \
  { L00, L01, L02, L03, L04, L05, L06 }, \
  { L10, L11, L12, L13, L14, L15, L16 }, \
  { L20, L21, L22, L23, L24, L25, L26 }, \
  { L30, L31, L32, L33, L34, L35, L36 }, \
  { L40, L41, L42, L43, L44, L45, L46 }, \
  { R00, R01, R02, R03, R04, R05, R06 }, \
  { R10, R11, R12, R13, R14, R15, R16 }, \
  { R20, R21, R22, R23, R24, R25, R26 }, \
  { R30, R31, R32, R33, R34, R35, R36 }, \
  { R40, R41, R42, R43, R44, R45, R46 }  \
}

/*
#define LED_LAYOUT( \
  L06, L05, L04, L03, L02, L01, L00, R00, R01, R02, R03, R04, R05, R06, \
  L16, L15, L14, L13, L12, L11, L10, R10, R11, R12, R13, R14, R15, R16, \
  L26, L25, L24, L23, L22, L21, L20, R20, R21, R22, R23, R24, R25, R26, \
  L36, L35, L34, L33, L32, L31, L30, R30, R31, R32, R33, R34, R35, R36, \
  L46, L45, L44, L43, L42, L41, L40, R40, R41, R42, R43, R44, R45, R46  \
) \
{ \
  L00, L01, L02, L03, L04, L05, L06, \
  L10, L11, L12, L13, L14, L15, L16, \
  L20, L21, L22, L23, L24, L25, L26, \
  L30, L31, L32, L33, L34, L35, L36, \
  L40, L41, L42, L43, L44, L45, L46, \
  R00, R01, R02, R03, R04, R05, R06, \
  R10, R11, R12, R13, R14, R15, R16, \
  R20, R21, R22, R23, R24, R25, R26, \
  R30, R31, R32, R33, R34, R35, R36, \
  R40, R41, R42, R43, R44, R45, R46  \
}

#define RGBLIGHT_LED_MAP LED_LAYOUT( \
  25, 20, 15, 10,  5,  0, \
  26, 21, 16, 11,  6,  1, \
  27, 22, 17, 12,  7,  2, \
  28, 23, 18, 13,  8,  3, \
  29, 24, 19, 14,  9,  4 )

*/
