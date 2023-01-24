/*
 * gtty.h
 *
 * graphical tty header
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2023 Tomaz Stih
 *
 * 21.01.2023   tstih
 *
 */
#ifndef __GTTY_H__
#define __GTTY_H__

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#include <ugpx.h>

typedef struct tty_s {
    rect_t area;                        /* tty area */
    coord x;                            /* current x */
    coord y;                            /* current y */
    uint8_t *chars;                     /* characters */
    uint8_t last_height;                /* tracking row height */
    int last_pos;                       /* last position in chars */
} tty_t;

extern tty_t *tty_create(rect_t *r, char *chars);
extern void tty_destroy(tty_t *tty, bool cls);
extern void tty_cls(tty_t *tty);
extern void tty_print(tty_t *tty, void *font, const char *text);
extern void tty_scroll(tty_t *tty);

#endif /* __GTTY_H__ */