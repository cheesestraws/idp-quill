/*
 * main.c
 *
 * the kontrabant main()!
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 20.02.2022   tstih
 *
 */
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include <game/engine.h>

#define MAXLINE 32

int main() {

    /* initialize game engine */
    engine_init();

    /* enter main game loop */
    engine_loop();

    /* all well.. */
    return 0;
}