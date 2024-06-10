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

#pragma once

#ifdef RGB_MATRIX_ENABLE
/* RGB Matrix driver configuration */
#    define DRIVER_COUNT 2

#    define DRIVER_ADDR_1 0b1110111
#    define DRIVER_ADDR_2 0b1110100
#    define DRIVER_1_LED_COUNT 48
#    define DRIVER_2_LED_COUNT 52
#    define RGB_MATRIX_LED_COUNT (DRIVER_1_LED_COUNT + DRIVER_2_LED_COUNT)

/* Set to infinit, which is use in USB mode by default */
#    define RGB_MATRIX_TIMEOUT RGB_MATRIX_TIMEOUT_INFINITE

/* Allow shutdown of led driver to save power */
#    define RGB_MATRIX_DRIVER_SHUTDOWN_ENABLE
/* Turn off backlight on low brightness to save power */
#    define RGB_MATRIX_BRIGHTNESS_TURN_OFF_VAL 32

/* Indication led */
#    define CAPS_LOCK_INDEX 55
#    define NUM_LOCK_INDEX 33
#    define LOW_BAT_IND_INDEX 91

#    ifdef VIA_ENABLE
#        define VIA_QMK_RGBLIGHT_ENABLE
#    endif

/* RGB Matrix Animation modes. Explicitly enabled
 * For full list of effects, see:
 * https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
 */

#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS

/* Set LED driver current */
#    define SNLED27351_CURRENT_TUNE \
        { 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30 }

#endif

/* One shot Keys */
#    define ONESHOT_TAP_TOGGLE 3  /* Tapping this number of times holds the key until tapped once again. */
#    define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

/* Kinetic Mouse Keys */
#    define MK_KINETIC_SPEED
#    define MOUSEKEY_DELAY 3 /*5*/
#    define MOUSEKEY_INTERVAL 8 /*10, t bwn crsr mvmt*/
#    define MOUSEKEY_MOVE_DELTA 16 /*16, acc step*/
#    define MOUSEKEY_INITIAL_SPEED 300 /*100*/
#    define MOUSEKEY_BASE_SPEED 2000 /*5000, max spd*/
#    define MOUSEKEY_DECELERATED_SPEED 625 /*400*/
#    define MOUSEKEY_ACCELERATED_SPEED 1250 /*3000*/
#    define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 8 /*16*/
#    define MOUSEKEY_WHEEL_BASE_MOVEMENTS 16 /*32*/
#    define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 24 /*48*/
#    define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 4 /*8*/
