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
#include "keychron_common.h"

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
    MAC_FN2,
};
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [MAC_BASE] = LAYOUT_ansi_82(
        LSG_T(KC_ESC),   KC_F1,   KC_F2,  KC_F3,  KC_F4, LSA_T(KC_F5),     KC_F6,LCAG_T(KC_F7),KC_F8,    KC_F9,    KC_F10,   KC_F11, KC_F12, KC_F13,                            KC_MUTE,
        MT(MOD_LSFT|MOD_LALT|MOD_LGUI,KC_GRV),    KC_1,  KC_2,   KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,   KC_0,          KC_MINS, KC_EQL, KC_BSPC,   KC_F5,
        MT(MOD_LCTL|MOD_LSFT|MOD_LGUI,KC_TAB),    KC_Q,  KC_W,   KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,   KC_P,          KC_LBRC, KC_RBRC, KC_BSLS,  KC_PGUP,
        HYPR_T(KC_ENT),  KC_A,    KC_S,   KC_D,   KC_F,  KC_G,   KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,          KC_ENT,                                    KC_PGDN,
        OSM(MOD_LSFT),            KC_Z,   KC_X,   KC_C,  KC_V,   KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,          RSFT_T(KC_ENT),       KC_UP,
        KC_LCTL,KC_LALT, KC_LGUI,                               LT(1,KC_SPC),                            KC_RGUI,  RALT_T(KC_MCTL),  SC_LCPO,     KC_LEFT, KC_DOWN, KC_RGHT),

    [MAC_FN] = LAYOUT_ansi_82(
        LSG_T(KC_ESC),  TO(0),   TO(4),  TO(1),  KC_F4, KC_LPAD,                                       KC_MPRV, KC_MPLY, KC_MNXT, LSA(KC_BRID),  LSA(KC_BRIU),KC_F11,  KC_BTN1,KC_BTN2,KC_BTN3,
        MT(MOD_LSFT|MOD_LALT|MOD_LGUI,KC_BSPC),  KC_SPC, KC_BTN1,  KC_BTN3,  KC_BTN2,  _______,  _______,  _______,  _______,  KC_BTN3,   RGB_HUI, RGB_VAI,RGB_MOD,     KC_DEL,    BT_HST1,
        MT(MOD_LCTL|MOD_LSFT|MOD_LGUI,KC_TAB), S(KC_MINS), S(KC_EQL), KC_MS_U,S(C(KC_Z)),  KC_WH_R,  C(KC_C),  C(KC_Z),  KC_BTN1,  KC_BTN2, C(KC_V), RGB_SPI, RGB_SAI,KC_TAB,      BT_HST2,
        HYPR_T(KC_ENT),  _______, KC_MS_L,KC_MS_D,KC_MS_R, _______, KC_LEFT, KC_DOWN,  KC_UP,    KC_RIGHT, S(KC_SCLN),S(KC_QUOT),      A(G(KC_ENT)),                               BT_HST3,
        KC_LSFT,      S(KC_COMM), C(KC_X), KC_WH_L, KC_WH_D,        KC_WH_U, KC_WH_R,  KC_0,      KC_MINS, KC_EQL,   S(KC_DOT),        KC_RSFT,              _______,
        KC_LCTL,KC_LALT, KC_LGUI,                               KC_SPC,                                    KC_RGUI,  C(G(KC_Q)),       KC_RCTL,     _______, _______,  _______),

    [WIN_BASE] = LAYOUT_ansi_82(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,             KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_ansi_82(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,            RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            KC_END,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [MAC_FN2] = LAYOUT_ansi_82(
        LSG_T(KC_ESC),  TO(0),   TO(1),  TO(4),  KC_F4, KC_F5,                                       LSA(KC_BRID), KC_F7, LSA(KC_BRIU), KC_F9,  KC_F10,KC_F11,     P2P4G,  QK_BOOT,BAT_LVL,
        MT(MOD_LSFT|MOD_LALT|MOD_LGUI,KC_BSPC),  KC_SPC, KC_BTN1,  KC_BTN3,  KC_BTN2,  _______,  _______,  _______,  _______,  KC_BTN3,   RGB_HUI, RGB_VAI,RGB_MOD,     KC_DEL,    BT_HST1,
        MT(MOD_LCTL|MOD_LSFT|MOD_LGUI,KC_TAB), S(KC_MINS), S(KC_EQL), KC_MS_U,S(C(KC_Z)),  KC_WH_R,  C(KC_C),  C(KC_Z),  KC_BTN1,  KC_BTN2, C(KC_V), RGB_SPI, RGB_SAI,KC_TAB,      BT_HST2,
        HYPR_T(KC_ENT),  _______, KC_MS_L,KC_MS_D,KC_MS_R, _______, KC_LEFT, KC_DOWN,  KC_UP,    KC_RIGHT, S(KC_SCLN),S(KC_QUOT),      A(G(KC_ENT)),                               BT_HST3,
        KC_LSFT,      S(KC_COMM), C(KC_X), KC_WH_L, KC_WH_D,        KC_WH_U, KC_WH_R,  KC_0,      KC_MINS, KC_EQL,   S(KC_DOT),        KC_RSFT,              _______,
        KC_LCTL,KC_LALT, KC_LGUI,                               KC_SPC,                                    KC_RGUI,  C(G(KC_Q)),       KC_RCTL,     _______, _______,  _______),
};

// clang-format on
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [MAC_FN]   = {ENCODER_CCW_CW(KC_WH_U, KC_WH_D)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [MAC_FN2]  = {ENCODER_CCW_CW(KC_BRID, KC_BRIU)},
};
#endif // ENCODER_MAP_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = get_highest_layer(state);

    switch (layer) {
        case 0:  // Base layer
            rgb_matrix_mode_noeeprom(RGB_MATRIX_CYCLE_LEFT_RIGHT); // Animated effect
            break;
        case 1:  // Layer 1
            rgb_matrix_mode_noeeprom(RGB_MATRIX_GRADIENT_UP_DOWN); // Static effect
            rgb_matrix_sethsv_noeeprom(242, 255, 255);         // Hot pink
            break;
        case 4:  // Layer 4
            rgb_matrix_mode_noeeprom(RGB_MATRIX_GRADIENT_UP_DOWN); // Static effect
            rgb_matrix_sethsv_noeeprom(72, 255, 255);        // Lime Green
            break;
        default:
            rgb_matrix_mode_noeeprom(RGB_MATRIX_JELLYBEAN_RAINDROPS);
            break;
    }

    if (get_oneshot_mods() & MOD_MASK_SHIFT) {
            rgb_matrix_mode_noeeprom(RGB_MATRIX_GRADIENT_UP_DOWN); // Static effect
            rgb_matrix_sethsv_noeeprom(128, 255, 255);        // Cyan
    }

    return state;
}
