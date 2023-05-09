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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN1
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * ,------------------------------------------------------------------------------------.
 * | ~ ` |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  Bsp |
 * |------------------------------------------------------------------------------------|
 * |  Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |Ent |
 * |-------------------------------------------------------------------------------'    |
 * |  Caps  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;: |  '" |  \  |   |
 * |------------------------------------------------------------------------------------|
 * |Shift |  \  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /? |   Shift   |
 * '------------------------------------------------------------------------------------'
 *       | Alt |   Ctrl   |                 Space                   |   Ctrl   | FN1 |
 *       `---------------------------------------------------------------------------'
*/
    [_BASE] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,   KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,
    KC_LCAP, KC_A,    KC_S,   KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,
    KC_LSFT, KC_BSLS, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
          KC_LALT, KC_LCTL,                       KC_SPC,                          KC_RCTL, MO(_FN1) 
    ),
/*
 * ,-----------------------------------------------------------------------------------------------------------------.
 * |     |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |       |   |     |NumLk|PrScr|ScrLk|
 * |-------------------------------------------------------------------------------------|   |-----------------------|
 * |       |     |     |     |     |     |     |     |     |     |     |     |     |     |   |     |     |     |Pause|
 * |-------------------------------------------------------------------------------'     |   |-----------------------|
 * |        |     |     |     |     |     |     |     |     |     |     |     |          |   |     |     |     |RAlt |
 * |-------------------------------------------------------------------------------------|   |-----------------------|
 * |           |     |     |     |     |boot |     |     |     |     |     |       |     |   |     |     |     |     |
 * |-------------------------------------------------------------------------------------|   |-----------------|     |
 * |      |          |                                           |     |     |     |     |   |    GUI    |RCtrl|     |
 * `-----------------------------------------------------------------------------------------------------------------'
*/
    [_FN1] = LAYOUT(
    _______, KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______,     _______,KC_NUM, KC_PSCR, KC_SCRL,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,     _______,_______,_______, KC_PAUS,
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,                     _______,_______,_______, KC_RALT,
    _______,        _______,_______,_______,_______,QK_BOOT,_______,_______,_______,_______,_______,_______,_______,     _______,_______,_______, _______,
    _______,        _______,                           _______,                     _______,_______,_______,_______,         KC_RGUI,    KC_RCTL
	)
};
