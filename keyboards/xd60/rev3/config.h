/*
Copyright 2019 Rodrigo Feijao <hello@rodrigofeijao.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7844   // "XD"
#define PRODUCT_ID      0x6363
#define DEVICE_VER      0x0001
#define MANUFACTURER    XIUDI
#define PRODUCT         XD60rev3
#define DESCRIPTION     XD60 rev3 Keyboard PCB by XIUDI

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *         ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_ROW_PINS { D0, D1, D2, D3, D5 }
#define MATRIX_COL_PINS { F0, F1, E6, C7, C6, B6, D4, B1, B7, B5, B4, D7, D6, B3 }
#define UNUSED_PINS

/* Backlight Setup */
#define BACKLIGHT_PIN F5
#define BACKLIGHT_LEVELS 6
#define BACKLIGHT_ON_STATE 0

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* RGB Underglow
 * F6 PIN for XD60v3 that has pre-soldered LEDs
 */
#define RGB_DI_PIN F6
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 12
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* マウス */

// 移動キーを押してからカーソルを移動するまでの遅延時間 ms
#undef  MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 0

// カーソルの速度が最大速度に達するまでの時間 ms
// 加速をなくしたい場合は 0 にする
#undef  MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 40

// カーソルの描画の間隔 ms
// 60FPS の場合は 16ms
// MOUSEKEY_INTERVAL を下げるとカーソル速度が上がるのでその場合は MOUSEKEY_MAX_SPEED を下げる
#undef  MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 16

// カーソル移動の最高スピード
#undef  MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 4

#undef  MOUSEKEY_WHEEL_INTERVAL
#define MOUSEKEY_WHEEL_INTERVAL 16

// ホイールはすぐに最高速度になってほしい
#undef  MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 0

#undef  MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED 2
