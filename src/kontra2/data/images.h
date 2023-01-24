/*
 * images.h
 *
 * game images
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2023 Tomaz Stih
 *
 * 21.01.2023   tstih
 *
 */
#ifndef __IMAGES_H__
#define __IMAGES_H__

#include <stdint.h>

typedef struct image_s {
    uint8_t location;
    char *name;
    uint16_t offset; 
} image_t;

#define     NUMIMAGES   32

extern const image_t images[];

#endif /* __IMAGES_H__ */