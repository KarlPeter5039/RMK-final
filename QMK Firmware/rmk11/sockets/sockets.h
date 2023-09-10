#pragma once

#include "rmk.h"

#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

#ifndef FLIP_HALF
// Standard Keymap
// (TRRS jack on the left half is to the right, TRRS jack on the right half is to the left)
#define LAYOUT( \
	L00, L01, L02, L03, L04, L05, L06, R00, R01, R02, R03, R04, R05, R06, \
	L10, L11, L12, L13, L14, L15,      R10, R11, R12, R13, R14, R15, R16, \
	L20, L21, L22, L23, L24, L25,      R20, R21, R22, R23, R24, R25, R26, \
	L30, L31, L32, L33, L34, L35,      R30, R31, R32, R33, R34, R35, R36, \
	L40, L41, L42, L43,                R40, R41, R42, R43, R44, R45, R46 \
	) \
	{ \
		{ L00, L01, L02, L03, L04, L05, L06 }, \
		{ L10, L11, L12, L13, L14, L15 }, \
		{ L20, L21, L22, L23, L24, L25 }, \
		{ L30, L31, L32, L33, L34, L35 }, \
		{ L40, L41, L42, L43           }, \
		{ R00, R01, R02, R03, R04, R05 }, \
		{ R10, R11, R12, R13, R14, R15 }, \
		{ R20, R21, R22, R23, R24, R25 }, \
		{ R30, R31, R32, R33, R34, R35 }, \
		{ R40, R41, R42, R43,      R45 } \
	}
#else
// Keymap with right side flipped
// (TRRS jack on both halves are to the right)
#define LAYOUT( \
	L00, L01, L02, L03, L04, L05, L06, R00, R01, R02, R03, R04, R05, R06, \
	L10, L11, L12, L13, L14, L15,      R10, R11, R12, R13, R14, R15, R16, \
	L20, L21, L22, L23, L24, L25,      R20, R21, R22, R23, R24, R25, R26, \
	L30, L31, L32, L33, L34, L35,      R30, R31, R32, R33, R34, R35, R36, \
	L40, L41, L42, L43,                R40, R41, R42, R43, R44,      R46 \
	) \
	{ \
		{ L00, L01, L02, L03, L04, L05, L06 }, \
		{ L10, L11, L12, L13, L14, L15 }, \
		{ L20, L21, L22, L23, L24, L25 }, \
		{ L30, L31, L32, L33, L34, L35 }, \
		{ L40, L41, L42, L43           }, \
		{ R00, R01, R02, R03, R04, R05 }, \
		{ R10, R11, R12, R13, R14, R15 }, \
		{ R20, R21, R22, R23, R24, R25 }, \
		{ R30, R31, R32, R33, R34, R35 }, \
		{ R40, R41, R42, R43,      R45 } \
	}
#endif

#define LAYOUT_ortho_4x12 LAYOUT
