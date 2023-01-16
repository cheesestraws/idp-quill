/*
 * engine.h
 *
 * Game engine header.
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 13.11.2022   tstih
 *
 */
#ifndef __ENGINE_H__
#define __ENGINE_H__

#include <stdint.h>
#include <stdbool.h>

#include <data/objects.h>

#define MAX_INPUT_LEN   32      /* 32 chars */
#define MAX_FLAGS       33

/* sepecial flags */
#define FLG_DARK        0
#define FLG_COUNT_CARR  1
/* auto dec. flags */
#define FLG_DSC         2       
#define FLG_DSCD        3   /* its dark */
#define FLG_DSCDO0      4   /* its dark and obj 0 not present */
/* every command */
#define FLG_CMD0        5
#define FLG_CMD1        6
#define FLG_CMD2        7
#define FLG_CMD3        8
#define FLG_CMDD        9   /* its dark */
#define FLG_CMDDO0      10  /* its dark and obj 0 not present */
/* kontrabant 2 special flag */
#define FLG_MINUTE      28
#define FLG_SECOND      29
/* more special flags */
#define FLG_SCORE       30
#define FLG_TURNS_LO    31
#define FLG_TURNS_HI    32

typedef struct engine_s {

    /* user command */
    char input[MAX_INPUT_LEN+1];

    /* current location */
    uint8_t location;

    /* pointer to objects */
    object_t *objects;

    /* user flags */
    uint8_t flags[MAX_FLAGS];

    /* quit game?*/
    bool quit;

    /* done processing */
    bool done;

} engine_t;

/* get the engine data structure */
extern engine_t *engine();

/* initialize the game engine */
extern void engine_init();

/* main game loop */
extern void engine_loop();

#endif /* __ENGINE_H__ */