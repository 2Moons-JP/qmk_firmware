/* Copyright 2020 2Moons
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

#include "mak.h"

#include "quantum.h"

#define XXX KC_NO//readabilty 

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
//////////////////////////////////////////////////////////////////////////////
// When only use Slice Rev1.
//////////////////////////////////////////////////////////////////////////////

/*
 * ,------------------------------------------------        --------------------------------------------------.
 * | L00 | L01 | L02 | L03 | L04 | L05 | L06 | L07 |        | R00 | R01 | R02 | R03 | R04 | R05 |  R06R07R08  |
 * |------------------------------------------------      ------------------------------------------------------+
 * | L10 |   L11  | L12 | L13 | L14 | L15 | L16 |         | R10 | R11 | R12 | R13 | R14 | R15 | R16 |    R37    |
 * |----------------------------------------------        ------------------------------------------------------+
 * | L20 |   L21   | L22 | L23 | L24 | L25 | L26 |          | R20 | R21 | R22 | R23 | R24 | R25 |      R26      |
 * |-------------------------------------------------   --------------------------------------------------------+
 * | L30 |    L31     | L32 | L33 | L34 | L35 | L36 |   | R30 | R31 | R32 | R33 | R34 | R34 | R35 |  R36R37R38  |
 * |-------------------------------------------------   --------------------------------------------------------'
 * | L40 |  L41  |  L42  |          L43 | L44L45L46 |    |   R40   | R41 |                |  R42  |  R43  | R44 |
 * |-------------------------------------------------    -------------------------------------------------------'
 */

#define LAYOUT( \
    L00, L10, L01, L11, L02, L12, L03,           R00, R10, R01, R11, R02, R12, R03, R13, R04,  \
    L20, L30, L21, L31, L22, L32,                R20, R30, R21, R31, R22, R32, R23, R33, R24, \
    L40, L50, L41, L51, L42, L52,                R40, R50, R41, R51, R42, R52, R43, R53, \
    L60, L70, L61, L71, L62, L72,                R60, R70, R61, R71, R62, R72, R63, R73, \
    L80, L90, L81, L91, L82,                     R80, R90, R81, R91, R82, R92, R83 \
  ) \
  { \
    { L00,   L01,   L02,   L03,   XXX }, \
    { L10,   L11,   L12,   XXX,   XXX }, \
    { L20,   L21,   L22,   XXX,   XXX }, \
    { L30,   L31,   L32,   XXX,   XXX }, \
    { L40,   L41,   L42,   XXX,   XXX }, \
    { L50,   L51,   L52,   L03,   XXX }, \
    { L60,   L61,   L62,   XXX,   XXX }, \
    { L70,   L71,   L72,   XXX,   XXX }, \
    { L80,   L81,   L82,   XXX,   XXX }, \
    { L90,   L91,   XXX,   XXX,   XXX }, \
    { R00,   R01,   R02,   R03,   R04 }, \
    { R10,   R11,   R12,   R13,   XXX }, \
    { R20,   R21,   R22,   R23,   R24 }, \
    { R30,   R31,   R32,   R33,   XXX }, \
    { R40,   R41,   R42,   R43,   XXX }, \
    { R50,   R51,   R52,   R53,   XXX }, \
    { R60,   R61,   R62,   R63,   XXX }, \
    { R70,   R71,   R72,   R73,   XXX }, \
    { R80,   R81,   R82,   R83,   XXX }, \
    { R90,   R91,   R92,   XXX,   XXX } \
  }
