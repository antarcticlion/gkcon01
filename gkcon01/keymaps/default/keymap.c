/* Copyright 2020 Antarcticlion
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
    _FN
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
/*       C00      C01      C02      C03      C04      C05      C06      C07      C08      C09      
           C10      C11      C12      C13      C14      C15      C16      C17      C18      C19 */
         KC_F5,   KC_1,    KC_2,    KC_3,    KC_4,    KC_7,    KC_8,    KC_9,    KC_PWR,  KC_F10,
           KC_PSCR, KC_0,    KC_NO,   KC_LANG2,KC_WFAV, KC_NO,   KC_NO,   KC_END,  KC_PGDN, KC_SLEP,
           
         KC_LCTL, KC_GRV,  KC_F1,   KC_F2,   KC_5,    KC_6,    KC_EQL,  KC_F8,   KC_DEL,  KC_F9,
           KC_MUTE, KC_MINS, KC_EJCT, KC_NO,   KC_WREF, KC_NO,   KC_NO,   KC_HOME, KC_PGUP, KC_INS,
           
         KC_MNXT, KC_INT5, KC_INT4, KC_INT3, KC_B,    KC_N,    KC_INT1, KC_APP,  KC_DOWN, KC_F12,
           KC_RALT, KC_SLSH, KC_NO,   KC_NO,   KC_WSTP, KC_NO,   KC_NO,   KC_LEFT, KC_PMNS, KC_RGHT,
           
         KC_RCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_M,    KC_COMM, KC_DOT,  KC_NLCK, KC_ENT,
           KC_VOLU, KC_NUHS, KC_MRWD, KC_P0,   KC_WFWD, KC_NO,   KC_NO,   KC_NO,   KC_PAST, KC_PSLS,
           
         KC_MPLY, KC_ESC,  KC_NUBS, KC_F4,   KC_G,    KC_H,    KC_F6,   KC_NO,   KC_SPC,  KC_F11,
           KC_LALT, KC_QUOT, KC_NO,   KC_P0,   KC_WBAK, KC_NO,   KC_WSCH, KC_UP,   KC_PDOT, KC_P0,
           
         KC_MSTP, KC_A,    KC_S,    KC_D,    KC_F,    KC_J,    KC_K,    KC_L,    KC_P1,   KC_BSLS,
          KC_VOLD, KC_SCLN, KC_NO,   KC_RWIN, KC_WHOM, KC_NO,   KC_RSFT, KC_PENT, KC_P3,   KC_P2,
          
         KC_MPRV, KC_TAB,  KC_CAPS, KC_F3,   KC_T,    KC_Y,    KC_RBRC, KC_F7,   KC_P4,   KC_BSPC,
          KC_NO,   KC_LBRC, KC_LWIN, KC_NO,   KC_MAIL, KC_CALC, KC_LSFT, KC_PDOT, KC_P6,   KC_P5,
          
         KC_PAUS, KC_Q,    KC_W,    KC_E,    KC_R,    KC_U,    KC_I,    KC_O,    KC_P7,   KC_INT3,
          KC_SLCK, KC_P,    KC_NO,   KC_LANG1,KC_MSEL, KC_MYCM, KC_WAKE, KC_PPLS, KC_P9,   KC_P8
          ),
    [_FN] = LAYOUT(
/*       C00      C01      C02      C03      C04      C05      C06      C07      C08      C09      
           C10      C11      C12      C13      C14      C15      C16      C17      C18      C19 */
         KC_F5,   KC_1,    KC_2,    KC_3,    KC_4,    KC_7,    KC_8,    KC_9,    KC_PWR,  KC_F10,
           KC_PSCR, KC_0,    KC_NO,   KC_LANG2,KC_WFAV, KC_NO,   KC_NO,   KC_END,  KC_PGDN, KC_SLEP,
           
         KC_LCTL, KC_GRV,  KC_F1,   KC_F2,   KC_5,    KC_6,    KC_EQL,  KC_F8,   KC_DEL,  KC_F9,
           KC_MUTE, KC_MINS, KC_EJCT, KC_NO,   KC_WREF, KC_NO,   KC_NO,   KC_HOME, KC_PGUP, KC_INS,
           
         KC_MNXT, KC_INT5, KC_INT4, KC_INT3, KC_B,    KC_N,    KC_INT1, KC_APP,  KC_DOWN, KC_F12,
           KC_RALT, KC_SLSH, KC_NO,   KC_NO,   KC_WSTP, KC_NO,   KC_NO,   KC_LEFT, KC_PMNS, KC_RGHT,
           
         KC_RCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_M,    KC_COMM, KC_DOT,  KC_NLCK, KC_ENT,
           KC_VOLU, KC_NUHS, KC_MRWD, KC_P0,   KC_WFWD, KC_NO,   KC_NO,   KC_NO,   KC_PAST, KC_PSLS,
           
         KC_MPLY, KC_ESC,  KC_NUBS, KC_F4,   KC_G,    KC_H,    KC_F6,   KC_NO,   KC_SPC,  KC_F11,
           KC_LALT, KC_QUOT, KC_NO,   KC_P0,   KC_WBAK, KC_NO,   KC_WSCH, KC_UP,   KC_PDOT, KC_P0,
           
         KC_MSTP, KC_A,    KC_S,    KC_D,    KC_F,    KC_J,    KC_K,    KC_L,    KC_P1,   KC_BSLS,
          KC_VOLD, KC_SCLN, KC_NO,   KC_RWIN, KC_WHOM, KC_NO,   KC_RSFT, KC_PENT, KC_P3,   KC_P2,
          
         KC_MPRV, KC_TAB,  KC_CAPS, KC_F3,   KC_T,    KC_Y,    KC_RBRC, KC_F7,   KC_P4,   KC_BSPC,
          KC_NO,   KC_LBRC, KC_LWIN, KC_NO,   KC_MAIL, KC_CALC, KC_LSFT, KC_PDOT, KC_P6,   KC_P5,
          
         KC_PAUS, KC_Q,    KC_W,    KC_E,    KC_R,    KC_U,    KC_I,    KC_O,    KC_P7,   KC_INT3,
          KC_SLCK, KC_P,    KC_NO,   KC_LANG1,KC_MSEL, KC_MYCM, KC_WAKE, KC_PPLS, KC_P9,   KC_P8
          ),
};

