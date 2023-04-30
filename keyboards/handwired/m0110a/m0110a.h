/* Copyright 2023 DmNosachev
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

/* readability */
#define XXX KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

/*
 * ,-----------------------------------------------------------------------------------------------------------------.
 * | ~ ` |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bsp |   |Clear|  =  |  /  |  *  |
 * |-------------------------------------------------------------------------------------|   |-----------------------|
 * |  Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |     |   |  7  |  8  |  9  |  -  |
 * |-------------------------------------------------------------------------------'     |   |-----------------------|
 * |  Caps  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;: |  '" |   Enter  |   |  4  |  5  |  6  |  +  |
 * |-------------------------------------------------------------------------------------|   |-----------------------|
 * |   Shift   |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /? | Shift | Up  |   |  1  |  2  |  3  |Enter|
 * |-------------------------------------------------------------------------------------|   |-----------------|     |
 * | Opt  |   Cmd    |                 Space                     |  \  |Left |Down |Right|   |  0        |  .  |     |
 * `-----------------------------------------------------------------------------------------------------------------'
*/


#define LAYOUT_debug( \
	K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
	K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
	K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
	K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, \
	K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, \
	K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, \
	K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, \
	K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B  \
) \
{ \
/* 0 */  { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B }, \
/* 1 */  { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B }, \
/* 2 */  { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B }, \
/* 3 */  { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B }, \
/* 4 */  { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B }, \
/* 5 */  { K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B }, \
/* 6 */  { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B }, \
/* 7 */  { K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B }  \
}
/*          0    1    2    3    4    5    6    7    8    9    A    B     */

