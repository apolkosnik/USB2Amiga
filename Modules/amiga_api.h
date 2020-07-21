/*
 * written by SvOlli
 *
 * distributed under the terms of the GPLv3 or later
 */

#ifndef __AMIGA_API_H__
#define __AMIGA_API_H__ __AMIGA_API_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* this is the commom interface everyone has to use */

/* update the mouse, move it and press/release buttons */
void amiga_mouse_update( uint8_t buttons, int8_t move_x, int8_t move_y );

/* send a keystroke (or command) in amiga keymapping and protocol */
void amiga_keyboard_send( uint8_t command_code );

/* reset the amiga (implementation of AMIGA+AMIGA+CTRL) */
void amiga_keyboard_reset();

#ifdef __cplusplus
}
#endif

#endif
