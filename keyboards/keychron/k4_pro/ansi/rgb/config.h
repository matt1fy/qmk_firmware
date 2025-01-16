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
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255
#    define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_MATRIX_DEFAULT_SAT 255
#    define RGB_MATRIX_DEFAULT_SPD 50

#    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT

/* Set LED driver current */
#    define SNLED27351_CURRENT_TUNE \
        { 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30 }

#endif

/* One shot Keys */
#    define ONESHOT_TAP_TOGGLE 3  /* Tapping this number of times holds the key until tapped once again. */
#    define ONESHOT_TIMEOUT 3000  /* Time (in ms) before the one shot key is released */

/* Kinetic Mouse Keys */
#    define MOUSEKEY_INERTIA
#    define MOUSEKEY_DELAY 19 /*150*/
#    define MOUSEKEY_INTERVAL 6 /*16, t bwn crsr mvmt*/
#    define MOUSEKEY_MAX_SPEED 28 /*32, acc step*/
#    define MOUSEKEY_TIME_TO_MAX 55 /*32*/
#    define MOUSEKEY_FRICTION 12 /*24*/
#    define MOUSEKEY_MOVE_DELTA 1 /*1 strongly recommended*/

#    define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 8
#    define MOUSEKEY_WHEEL_BASE_MOVEMENTS 16
#    define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 32
#    define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 4
