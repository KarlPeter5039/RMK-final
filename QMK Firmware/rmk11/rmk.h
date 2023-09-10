#pragma once

#include "quantum.h"

#ifdef KEYBOARD_rmk_rev1
    #include "rev1.h"
#elif KEYBOARD_rmk_rev2
    #include "rev2.h"
#elif KEYBOARD_rmk_sockets
    #include "sockets.h"
#endif
