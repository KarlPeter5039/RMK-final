/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

// wiring of each half
#define MATRIX_ROW_PINS { B5, F4, D7, E6, B4 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2 , B6 }
// #define MATRIX_COL_PINS { B3, B1, F7, F6, F5, F4 } //uncomment this line and comment line above if you need to reverse left-to-right key order

/* Rotary Encoders */
#define ENCODERS_PAD_A { D3 }
#define ENCODERS_PAD_B { D2 }
#define ENCODER_RESOLUTION 4
#define ENCODERS_PAD_A_RIGHT { D3 , D4 }
#define ENCODERS_PAD_B_RIGHT { D2 , C6 }
#define ENCODER_RESOLUTION_RIGHT 4 

#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

#define DIODE_DIRECTION ROW2COL

#define SPLIT_WPM_ENABLE
#define USE_I2C
#define SPLIT_OLED_ENABLE

#define MIDI_ADVANCED
#define SLIDER_PINA D4

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
