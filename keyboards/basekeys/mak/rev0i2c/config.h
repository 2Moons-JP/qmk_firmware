/*
Copyright 2020 2Moons

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x002B
#define DEVICE_VER      0x0001
#define MANUFACTURER    2Moons
#define PRODUCT         Mak

/* key matrix size */
#define MATRIX_ROWS 20
#define MATRIX_COLS 9

// wiring of each half
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B4, B5, B6, C6, F4, F5 }
#define MATRIX_COL_PINS { F0, D4, D5, D6 }
#define MATRIX_ROW_PINS_RIGHT { F0, F1, B2, B1, B3, B7, B6, C6, B4, B5 }
#define MATRIX_COL_PINS_RIGHT { D7, D6, D4, D5, E6 }

#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
/* I2C configuration for split keyboard */
#define USE_I2C
#define SPLIT_USB_DETECT
/* Select hand configuration */
#define EE_HANDS
//#define MASTER_LEFT
//#define MASTER_RIGHT

/* RGB LED */
#ifdef RGBLIGHT_ENABLE
#define RGB_DI_PIN D3
#define RGBLED_NUM 14    // Number of LEDs. backlight x69
#define RGBLED_SPLIT { 6, 8 }
#define RGBLIGHT_LIMIT_VAL 120 /* The maximum brightness level */
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
#define RGBLIGHT_ANIMATIONS
#endif

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
