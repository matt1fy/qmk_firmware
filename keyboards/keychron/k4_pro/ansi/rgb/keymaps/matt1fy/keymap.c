/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

// clang-format off
enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_100(
        LCAG_T(KC_ESC),   KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_LAUNCHPAD,  A(KC_MINS),  LSA_T(KC_F17),  A(KC_EQL),  LT(1,KC_MUTE),  LSA(KC_VOLD),  LSA(KC_VOLU),    KC_F18,  LT(1,KC_MPLY),   KC_F19,  _______,   KC_PGUP,  KC_PGDN,  KC_KB_POWER,
        LSG_T(KC_GRV),   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_F5,   KC_PSLS,  KC_PAST,  KC_PMNS,
        MT(MOD_LCTL | MOD_LSFT | MOD_LGUI,KC_TAB),   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
        LSA_T(KC_ENT),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              C(KC_ENT),             KC_P4,    KC_P5,    KC_P6,
        OSM(MOD_LSFT),            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              RSFT_T(KC_ENT),  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
        SC_LCPO,  KC_LALT, KC_LGUI,                               LT(1,KC_SPC),                                 KC_RGUI, RCS_T(KC_RALT), SC_RCPC,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT          ),
    [MAC_FN] = LAYOUT_ansi_100(
        TO(0),  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_MCTL,    KC_F6,    LSG_T(KC_DOWN),    KC_F8,    _______,    LSA(KC_BRID),   LSA(KC_BRIU),     KC_MPRV,   _______,  KC_MNXT,  _______,  DB_TOGG,  EE_CLR,  QK_BOOT,
        KC_BSPC,  KC_BTN1,  KC_BTN3,  KC_BTN2,  _______,  _______,  _______,  _______,  RGB_SPI,  RGB_SAI,  RGB_HUI,  RGB_VAI,    RGB_MOD,  KC_DEL,            BT_HST1,  BT_HST2,  BT_HST3,  BAT_LVL,
        MT(MOD_LCTL | MOD_LSFT | MOD_LGUI,KC_TAB),  KC_ACL1,  KC_MS_U,  KC_ACL2,  _______,  KC_WH_U,  _______,  _______,  RGB_SPD,   RGB_SAD,  RGB_HUD,  RGB_VAD,    RGB_RMOD,  KC_TAB,            _______,  KC_F6,  _______,  _______,
        KC_ENT,  KC_MS_L, KC_MS_D,  KC_MS_R,  KC_WH_L,  KC_WH_D,  KC_WH_R,  _______,  _______,  _______,  _______,  _______,              A(G(KC_ENT)),            KC_F7,  _______,  KC_F8,
        KC_SPC,            S(KC_MINS),  C(KC_X),  C(KC_C),  C(KC_V),  KC_0,  KC_MINS,  KC_EQL,  KC_LBRC,  KC_RBRC,  _______,              _______,  KC_PGUP,  _______,  KC_F9,  _______,  _______,
        SC_LCPO,  KC_LALT,  KC_LGUI,                                _______,                                _______,  C(G(KC_Q)),    _______,  KC_HOME,  KC_PGDN,  KC_END,  _______,  _______          ),
    [WIN_BASE] = LAYOUT_ansi_100(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_DEL,   KC_HOME,  KC_END,   KC_PGUP,  KC_PGDN,  RGB_MOD,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT          ),
    [WIN_FN] = LAYOUT_ansi_100(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,  _______,  _______,  _______,  _______,  RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______          )
};

/* konek aku stim
void oneshot_locked_mods_changed_user(uint8_t mods) {
  if (mods & MOD_MASK_SHIFT) {
    println("Oneshot locked mods SHIFT");
  }
  if (mods & MOD_MASK_CTRL) {
    println("Oneshot locked mods CTRL");
  }
  if (mods & MOD_MASK_ALT) {
    println("Oneshot locked mods ALT");
  }
  if (mods & MOD_MASK_GUI) {
    println("Oneshot locked mods GUI");
  }
  if (!mods) {
    println("Oneshot locked mods off");
  }
}
*/
