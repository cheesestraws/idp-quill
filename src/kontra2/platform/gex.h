/*
 * gex.h
 *
 * game graphics header
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2023 Tomaz Stih
 *
 * 22.01.2023   tstih
 *
 */
#ifndef __GEX_H__
#define __GEX_H__

#include <stdint.h>
#include <stdlib.h>
#include <io.h>
#include <ugpx.h>

#include <data/images.h>

#define     IMG_SIZE    4096

extern void * gex_query_image(uint8_t location);
extern void gex_release_image(void *img);
extern void gex_draw_image(void *img, coord x, coord y);

#endif /* __GEX_H__ */