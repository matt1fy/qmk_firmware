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
#    define RGB_MATRIX_LED_COUNT 81

#    define SPI_SCK_PIN A5
#    define SPI_MISO_PIN A6
#    define SPI_MOSI_PIN A7

#    define DRIVER_CS_PINS \
        { B8, B9 }
#    define SNLED23751_SPI_DIVISOR 16
#    define SPI_DRIVER SPID1

/* Scan phase of led driver set as MSKPHASE_9CHANNEL(defined as 0x03 in snled27351.h) */
#    define PHASE_CHANNEL MSKPHASE_9CHANNEL

/* Set LED driver current */
#    define SNLED27351_CURRENT_TUNE \
        { 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C }

/* Set to infinit, which is use in USB mode by default */
#    define RGB_MATRIX_TIMEOUT RGB_MATRIX_TIMEOUT_INFINITE

/* Allow shutdown of led driver to save power */
#    define RGB_MATRIX_DRIVER_SHUTDOWN_ENABLE
/* Turn off backlight on low brightness to save power */
#    define RGB_MATRIX_BRIGHTNESS_TURN_OFF_VAL 32

/* Indications */
#    define BT_HOST_LED_MATRIX_LIST \
        { 28, 43, 57 }

#    define P2P4G_HOST_LED_MATRIX_LIST \
        { 13 }

#    define BAT_LEVEL_LED_LIST \
        { 59, 60, 61, 62, 63, 64, 65, 66, 67, 68 }

#    define CAPS_LOCK_INDEX 44
#    define LOW_BAT_IND_INDEX \
        { 74 }

#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS

#endif

/* One shot Keys */
#    define ONESHOT_TAP_TOGGLE 3  /* Tapping this number of times holds the key until tapped once again. */
#    define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

/* Kinetic Mouse Keys */
#    define MOUSEKEY_INERTIA
#    define MOUSEKEY_DELAY 25 /*150*/
#    define MOUSEKEY_INTERVAL 6 /*16, t bwn crsr mvmt*/
#    define MOUSEKEY_MAX_SPEED 14 /*32, acc step*/
#    define MOUSEKEY_TIME_TO_MAX 45 /*32*/
#    define MOUSEKEY_FRICTION 12 /*24*/
#    define MOUSEKEY_MOVE_DELTA 1 /*1 strongly recommended*/
