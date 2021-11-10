/* Copyright 2020 koboldMaki
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
#define MANUFACTURER KoboldMaki
#define PRODUCT duzboard
#define VENDOR_ID 0x0420
#define PRODUCT_ID 0x0420
#define DEVICE_VER 0x0420

/* key matrix size */
//#define MATRIX_ROWS 4
//#define MATRIX_COLS 10
#define MATRIX_ROWS 15
#define MATRIX_COLS 7

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */

/* key matrix pins */
//#define MATRIX_ROW_PINS { B1, B3, B2, B5 }
//#define MATRIX_COL_PINS { D3, D2, D1, D0, D4, C6, D7, E6, B4, B6 }

#define MATRIX_ROW_PINS { D3, C3, C4, C6, D2, B0, D7, A12, A13, B17, B16, D0, B1, C2, D6 }
#define MATRIX_COL_PINS { B3, D1, C0, D5, C1, B2, D4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define USB_POLLING_INTERVAL_MS 1

#define LED_PIN_ON_STATE 0
#define LED_NUM_LOCK_PIN A14
#define LED_CAPS_LOCK_PIN C7
#define LED_SCROLL_LOCK_PIN A5
#define LED_COMPOSE_PIN E26

#define EEPROM_SIZE 4096
