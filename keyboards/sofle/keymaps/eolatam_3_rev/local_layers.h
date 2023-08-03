/* Copyright 2023 eossesa
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

#include QMK_KEYBOARD_H

#include "keymap_spanish_latinamerica.h"
#include "local_general.h"

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {

/*
 * QWERTY ES_LA: to run with es-la keymap
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | BSPC |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  ´¨  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LSFT |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |  ñÑ  | RSFT |
 * |------+------+------+------+------+------| MPLAY |    | MUTE  |------+------+------+------+------+------|
 * | LCTL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |  ,;  |  .:  |  -_  | RCTL |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LALT | BTN3 |LOWER | /SPACE  /       \ ENTER\  |RAISE | TAB  | RALT | RMENU|
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_ES_LA] = LAYOUT(
     KC_ESC,     ES_1,     ES_2,     ES_3,     ES_4,       ES_5,                                  ES_6,     ES_7,     ES_8,     ES_9,     ES_0,  KC_BSPC,
     KC_TAB,     ES_Q,     ES_W,     ES_E,     ES_R,       ES_T,                                  ES_Y,     ES_U,     ES_I,     ES_O,     ES_P,  ES_ACUT,
    KC_LSFT,     ES_A,     ES_S,     ES_D,     ES_F,       ES_G,                                  ES_H,     ES_J,     ES_K,     ES_L,  ES_NTIL,  KC_RSFT,
    KC_LCTL,     ES_Z,     ES_X,     ES_C,     ES_V,       ES_B, KC_MPLY,    KC_MUTE,             ES_N,     ES_M,  ES_COMM,   ES_DOT,  ES_MINS,  KC_RCTL,
                        KC_LGUI,  KC_LALT,  KC_BTN3, MO(_LOWER),  KC_SPC,     KC_ENT, MO(_RAISE_ES_LA),   KC_TAB,  KC_RALT,   KC_APP
),

/* RAISE_ES_LA
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |  |°¬ |      |      |      |      |      |                    | NLOCK|      |      |      |  '?\ |  ¿¡  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |      |      |      |      |      |                    | INS  | PGUP |  UP  | PGDN |  '¨  |  +*~ |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LSFT |  <>  |      |      |      |      |-------.    ,-------| DEL  | LEFT | DOWN | RIGTH|  {[^ |  }]` |
 * |------+------+------+------+------+------| MPLAY |    |  MUTE |------+------+------+------+------+------|
 * | LCTL |  <>  |      |      |      |      |-------|    |-------|      | HOME | RALT |  END |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LALT | LCTR |LOWER | /ENTER  /       \ RALT \  |RAISE | RALT | RALT | RMENU|
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE_ES_LA] = LAYOUT(
    ES_PIPE,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,                       LAYER_KC_NUMPAD,  XXXXXXX,  XXXXXXX,  XXXXXXX, ES_QUOT,  ES_IQUE,
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,                                KC_INS,  KC_PGUP,    KC_UP,  KC_PGDN, ES_ACUT,  ES_PLUS,
    _______,  ES_LABK,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,                                KC_DEL,  KC_LEFT,  KC_DOWN,  KC_RGHT, ES_LCBR,  ES_RCBR,
    _______,  ES_LABK,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX, _______,     _______,         XXXXXXX,  KC_HOME,  KC_RALT,   KC_END, XXXXXXX,  XXXXXXX,
                        _______,  _______,  _______,    _______, _______,     KC_RALT,         _______,  KC_RALT,  _______,  _______
),

/*
 * QWERTY EN_US: symbols mapped to their position on a ES_LA keymap.
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | BSPC |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  ´¨  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LSFT |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   N  |  {[^ |
 * |------+------+------+------+------+------| MPLAY |    | MUTE  |------+------+------+------+------+------|
 * | LCTL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |  ,;  |  .:  |  -_  | RCTL |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LALT | BTN3 |LOWER | /SPACE  /       \ ENTER\  |RAISE | TAB  | RALT | RMENU|
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_EN_US] = LAYOUT(
     KC_ESC,     KC_1,     KC_2,     KC_3,     KC_4,       KC_5,                                  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,  KC_BSPC,
     KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,       KC_T,                                  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,  AB_ACUT,
    KC_LSFT,     KC_A,     KC_S,     KC_D,     KC_F,       KC_G,                                  KC_H,     KC_J,     KC_K,     KC_L,     KC_N,  KC_RSFT,
    KC_LCTL,     KC_Z,     KC_X,     KC_C,     KC_V,       KC_B, KC_MPLY,    KC_MUTE,             KC_N,     KC_M,  KC_COMM,   KC_DOT,  KC_MINS,  KC_RCTL,
                        KC_LGUI,  KC_LALT,  KC_BTN3, MO(_LOWER),  KC_SPC,     KC_ENT, MO(_RAISE_EN_US),   KC_TAB,  KC_RALT,   KC_APP
),

/* RAISE_EN_US
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |  |°¬ |      |      |      |      |      |                    | NLOCK|      |      |      |  '?\ |  ¿¡  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |      |      |      |      |      |                    | INS  | PGUP |  UP  | PGDN |  '¨  |  +*~ |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LSFT |  <>  |      |      |      |      |-------.    ,-------| DEL  | LEFT | DOWN | RIGTH|  {[^ |  }]` |
 * |------+------+------+------+------+------| MPLAY |    |  MUTE |------+------+------+------+------+------|
 * |Shift |  <>  |      |      |      |      |-------|    |-------|      | HOME |      |  END |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LALT | LCTR |LOWER | /ENTER  /       \SPACE \  |RAISE | RCTR | RALT | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE_EN_US] = LAYOUT(
    BA_PIPE,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,                       LAYER_KC_NUMPAD,  XXXXXXX,  XXXXXXX,  XXXXXXX, KC_QUOT,  BB_IQUE,
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,                                KC_INS,  KC_PGUP,    KC_UP,  KC_PGDN, AB_ACUT,  BB_PLUS,
    _______,  BB_LABK,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,                                KC_DEL,  KC_LEFT,  KC_DOWN,  KC_RGHT, BA_LCBR,  BA_RCBR,
    _______,  BB_LABK,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX, _______,     _______,         XXXXXXX,  KC_HOME,  KC_RALT,   KC_END, XXXXXXX,  XXXXXXX,
                        _______,  _______,  _______,    _______, _______,    KC_RALT,          _______,  KC_RALT,  _______,  _______
),

/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | CAPS |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | LSFT |  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  | RSFT |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LALT | LCTR |LOWER | /ENTER  /       \SPACE \  |RAISE | RCTR | RALT | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT(
    _______,    KC_F1,    KC_F2,    KC_F3,    KC_F4,      KC_F5,                                 KC_F6,    KC_F7,    KC_F8,    KC_F9,  KC_F10,   KC_F11,
    _______,     KC_1,     KC_2,     KC_3,     KC_4,       KC_5,                                  KC_6,     KC_7,     KC_8,     KC_9,    KC_0,   KC_F12,
    KC_CAPS,  KC_EXLM,    KC_AT,  KC_HASH,   KC_DLR,    KC_PERC,                               KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN, KC_RPRN,  KC_PIPE,
    _______,   KC_EQL,  KC_MINS,  KC_PLUS,  KC_LCBR,    KC_RCBR, _______,     _______,         KC_LBRC,  KC_RBRC,  KC_SCLN,  KC_COLN, KC_BSLS,  _______,
                        _______,  _______,  _______,    _______, _______,     _______,         _______,  _______,  _______,  _______
),

/*
 * NUMPAD ...
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Esc  |      |      |      |      |      |                    | NLCK |   /  |   *  |   -  |      | BSPC |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |      |      |      |      |      |                    |   7  |   8  |   9  |   +  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LSFT |      |      |      |      |      |-------.    ,-------|   4  |   5  |   6  |   +  |      | RSFT |
 * |------+------+------+------+------+------| MPLAY |    | MUTE  |------+------+------+------+------+------|
 * | LCTL |      |      |      |      |      |-------|    |-------|   1  |   2  |   3  | ENT  |      | RCTL |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCTR | LGUI | LALT |LOWER | /SPACE  /       \ ENTER\  |  0   |  0   |  .   | ENT  |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_NUMPAD] = LAYOUT(
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,                LAYER_KC_NUMPAD_CALLER,  KC_PSLS,  KC_PAST,  KC_PMNS, XXXXXXX,  _______,
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,                                 KC_P7,    KC_P8,    KC_P9,  KC_PPLS, XXXXXXX,  XXXXXXX,
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX,                                 KC_P4,    KC_P5,    KC_P6,  KC_PPLS, XXXXXXX,  _______,
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    XXXXXXX, KC_MPLY,    KC_MUTE,            KC_P1,    KC_P2,    KC_P3,  KC_PENT, XXXXXXX,  _______,
                        KC_LCTL,  KC_LGUI,  KC_LALT, MO(_LOWER),  KC_SPC,     KC_ENT,            KC_P0,    KC_P0,  KC_PDOT,  KC_PENT
),

/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      | ES-LA|      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      | EN-US|      |      |      |                    |      |      | M_UP |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |M_LEFT| M_DN |M_RGHT|      |      |
 * |------+------+------+------+------+------| MPLAY |    |  MUTE |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |M_LFTB|M_MIDB|M_RGHB|      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LALT | LCTR |LOWER | /ENTER  /       \SPACE \  |RAISE | RCTR | RALT | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_ADJUST] = LAYOUT(
    XXXXXXX,  XXXXXXX,LAYER_KC_ES_LA,      XXXXXXX,    XXXXXXX,       XXXXXXX,                               XXXXXXX,    XXXXXXX,       XXXXXXX,      XXXXXXX,       XXXXXXX, XXXXXXX,
    _______,  XXXXXXX,LAYER_KC_EN_US,      XXXXXXX,    XXXXXXX,       XXXXXXX,                               XXXXXXX,    XXXXXXX,       KC_MS_U,      XXXXXXX,       XXXXXXX, XXXXXXX,
    _______,  XXXXXXX,      XXXXXXX,       XXXXXXX,    XXXXXXX,       XXXXXXX,                               XXXXXXX,    KC_MS_L,       KC_MS_D,      KC_MS_R,       XXXXXXX, _______,
    _______,  XXXXXXX,      XXXXXXX,       XXXXXXX,    XXXXXXX,       XXXXXXX, XXXXXXX,    XXXXXXX,          XXXXXXX,    KC_BTN1,       KC_BTN3,      KC_BTN2,       XXXXXXX, _______,
                            _______,       _______,    _______,       _______, _______,    _______,          _______,    _______,       _______,      _______
)
};

// clang-format on
