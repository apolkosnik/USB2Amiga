/*
 * written by SvOlli
 * after reading the Amiga Hardware Reference Manual
 *
 * distributed under the terms of the GPLv3 or later
 */

#include "keycodes_amiga.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Amiga specific keys:
 * HELP  -> INS
 * KP ([ -> P-UP
 * KP )] -> P-DOWN
 * #^    -> F11
 * <>    -> F12    (missing on US keyboards, DIN have this key)
 * 
 * Unused USB keys (including remapped):
 * Right Control -> Left Control
 * F11 -> #^
 * F12 -> <>
 * PrtSc/SysRq
 * Scroll Lock
 * Pause/Break
 * Insert -> HELP
 * Home
 * End
 * PgUp -> KP ([
 * PgDn -> KP )]
 * Num Lock
 */

uint8_t usb2amiga[0x80] = 
{
/*
                    A    B    C    D    E    F    G    H    I    J    K    L  */
0xff,0xff,0xff,0xff,0x20,0x35,0x33,0x22,0x12,0x23,0x24,0x25,0x17,0x26,0x27,0x28,
/*
M    N    O    P    Q    R    S    T    U    V    W    X    Y    Z    1!   2@ */
0x37,0x36,0x18,0x19,0x10,0x13,0x21,0x14,0x16,0x34,0x11,0x32,0x15,0x31,0x01,0x02,
/*
3#   4$   5%   6^   7&   8*   9(   0)   RET  ESC  BS   TAB  SPC  -_   =+   [{ */
0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x44,0x45,0x41,0x42,0x40,0x0b,0x0c,0x1a,
/*
]}        \|   ;:   '"   `~   ,<   .>   /?   CAPS F1   F2   F3   F4   F5   F6 */
0x1b,0xff,0x0d,0x29,0x2a,0x00,0x38,0x39,0x3a,0x62,0x50,0x51,0x52,0x53,0x54,0x55,
/*
F7   F8   F9   F10  F11  F12  PRT  SCRL BRK  INS  HOME P-UP DEL  END  P-DN CS>*/
0x56,0x57,0x58,0x59,0x2b,0x30,0xff,0xff,0xff,0x5f,0xff,0x5a,0x46,0xff,0x5b,0x4e,
/*
CS<  CSv  CS^  NUML KP/  KP*  KP-  KP+  ENT  KP1  KP2  KP3  KP4  KP5  KP6  KP7*/
0x4f,0x4d,0x4c,0xff,0x5c,0x5d,0x4a,0x5e,0x43,0x1d,0x1e,0x1f,0x2d,0x2e,0x2f,0x3d,
/*
KP8  KP9  KP0  KP.  <>   MENU                                                 */
0x3e,0x3f,0x0f,0x3c,0x30,0x67,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
/*
                                                                              */
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
};


uint8_t modifier2amiga[0x08] =
{
/*
LCTL LSH  LALT LGUI RCTL RSH  RALT RGUI */
0x63,0x60,0x64,0x66,0x63,0x61,0x65,0x67
};
  
#ifdef __cplusplus
}
#endif
