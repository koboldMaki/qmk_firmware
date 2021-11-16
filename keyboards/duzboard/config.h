/* Copyright 2021 koboldMaki
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

//#include "config_common.h"

/* USB Device descriptor parameter */

#undef MANUFACTURER
#define MANUFACTURER KoboldMaki
#undef PRODUCT
#define PRODUCT duzboard
#undef VENDOR_ID
#define VENDOR_ID 0x1209
#undef PRODUCT_ID
#define PRODUCT_ID 0x345C
#undef DEVICE_VER
#define DEVICE_VER 0x0001

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 17

/* key matrix pins */
//s#define MATRIX_ROW_PINS { D3, C3, C4, C6, D2}
//#define MATRIX_COL_PINS { B3, D1, C0, D5, C1, B2, D4, B0, D7, A12, A13, B17, B16, D0, B1, C2, D6  }
#define MATRIX_ROW_PINS { A16, B18, B19, B10, B11}
#define MATRIX_COL_PINS { B16, B17, D0, A12, A13, D7, D4, D2, D3, C3, C4, C6, C7, E26, A5, A14, A15  }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Encoder Pins, Resolution */
#define ENCODERS_PAD_A { C9 }
#define ENCODERS_PAD_B { C8 }
#define ENCODER_RESOLUTION 4

/* LED Settings */
#define RGB_DI_PIN D5
#define DRIVER_LED_TOTAL 6
#define RGBLED_NUM 6

#define NOP_FUDGE 0.4

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#undef DEBOUNCE
#define DEBOUNCE 20

#define IGNORE_MOD_TAP_INTERRUPT

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define USB_POLLING_INTERVAL_MS 1
#define EEPROM_SIZE 4096
