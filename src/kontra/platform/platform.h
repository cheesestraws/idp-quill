/*
 * platform.h
 *
 * platform specific functions: writes, reads, randoms...
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 19.12.2022   tstih
 *
 */
#ifndef __PLATFORM_H__
#define __PLATFORM_H__

#include <stdint.h>
#include <stdbool.h>

/* platform read line, limit to max chars, return C string */
extern uint8_t platform_readline(char *out, uint8_t maxchars);

/* write to the area, for text only systems area is ignored */
#define AREA_SCREEN     0   /* whole screen */
#define AREA_LOCATION   1
#define AREA_INVENTORY  2
#define AREA_MESSAGES   3
#define AREA_SCORE      4
#define AREA_INPUT      5
extern void platform_write(uint8_t area, const char *s, bool newline);

/* clear area */
extern void platform_clear(uint8_t area);

/* random generator, must auto seed, 
   returns number between 1 and 100! */
extern int platform_rndgen();

/* press any key */
extern int platform_kbhit();

/* pause */
extern void platform_pause(int s50);

#endif /* __READLINE_H__ */