/*
A modeless Dvorak layout for the Atreus keyboard
Copyright (C) 2019 Jason Koh <wildlymanifest@fastmail.net>

This program is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your option)
any later version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
more details.

You should have received a copy of the GNU General Public License along with
this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

/* layers */
#define DVRK 0
#define FNNM 1
#define PUNV 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Dvorak */
    [DVRK] = LAYOUT(
        KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y,
        KC_F, KC_G, KC_C, KC_R, KC_L,

        KC_A, KC_O, KC_E, KC_U, KC_I,
        KC_D, KC_H, KC_T, KC_N, KC_S,

        KC_SCOLON, KC_Q, KC_J, KC_K, KC_X,
        KC_B, KC_M, KC_W, KC_V, KC_Z,

        KC_LSFT, KC_LGUI, KC_LALT, MO(FNNM), KC_BSPC, KC_LCTL,
        KC_RCTL, KC_SPC, MO(PUNV), KC_RALT, KC_RGUI, KC_RSFT
    ),
    /* function keys, numeric keypad */
    [FNNM] = LAYOUT(
        KC_F11, KC_F12, KC_PWR, RESET, DEBUG,
        KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PMNS,

        KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
        KC_PAST, KC_P4, KC_P5, KC_P6, KC_PPLS,

        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
        KC_PCMM, KC_P1, KC_P2, KC_P3, KC_PEQL,

        KC_TRNS, KC_TRNS, LALT_T(KC_EJCT), KC_TRNS, KC_VOLD, KC_TRNS,
        KC_TRNS, KC_ENT, KC_P0, RALT_T(KC_PDOT), KC_TRNS, RSFT_T(KC_PENT)
    ),
    /* punctuation, navigation */
    [PUNV] = LAYOUT(
        KC_GRV, KC_SLSH, KC_BSLS, KC_LBRC, KC_RBRC,
        KC_PGUP, KC_HOME, KC_UP, KC_END, KC_INS,

        KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,

        KC_1, KC_2, KC_3, KC_4, KC_5,
        KC_MPRV, KC_MRWD, KC_MPLY, KC_MFFD, KC_MNXT,

        KC_TRNS, LGUI_T(KC_MINS), LALT_T(KC_EQL), KC_ESC, KC_TAB, KC_TRNS,
        KC_TRNS, KC_VOLU, KC_TRNS, RALT_T(KC_MSTP), KC_TRNS, KC_TRNS
    )
};

#ifdef DEBUG_FW
void keyboard_post_init_user(void) {
    debug_enable = true;
    debug_matrix = true;
    debug_keyboard = true;
}
#endif
