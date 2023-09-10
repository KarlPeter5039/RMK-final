/*
This is the c configuration file for the keymap

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

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

#include "include.h"

/* Rotary Encoder */
#define ENCODERS_PAD_A { D3 }
#define ENCODERS_PAD_B { D2 }
#define ENCODER_RESOLUTION 4
#define ENCODERS_PAD_A_RIGHT { D3 , D4 }
#define ENCODERS_PAD_B_RIGHT { D2 , C6 }
#define ENCODER_RESOLUTION_RIGHT 4 

#define MIDI_ADVANCED
#define SLIDER_PINA D4

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define SPLIT_WPM_ENABLE
#define USE_I2C
#define SPLIT_OLED_ENABLE

#endif

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
