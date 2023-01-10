/*
 * objects.h
 *
 * object structure header
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 04.12.2022   tstih
 *
 */
#ifndef __OBJECTS_H__
#define __OBJECTS_H__

#include <stdint.h>

/* special location values */
#define     O_NOTCRE    252
#define     O_WORN      253
#define     O_CARRIED   254

typedef struct object_s {
    char *name;
    uint8_t slocid; /* starting location id (255=none) */
} object_t;

#define     MAXCARR     6
#define     NUMOBJECTS  56
extern object_t objects[];

#define     LIGHTOBJ    0

#endif /* __OBJECTS_H__ */