/*
 * objects.h
 *
 * object structure header
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2023 Tomaz Stih
 *
 * $DATE$   tstih
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

#define     MAXCARR     $NUM$
#define     NUMOBJECTS  $NUM2$
extern const object_t objects[];

#define     LIGHTOBJ    0

#endif /* __OBJECTS_H__ */