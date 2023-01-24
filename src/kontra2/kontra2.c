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

#include <ugpx.h>

#include <game/engine.h>
#include <platform/platform.h>

int main() {

    /* initialize the platform */
    platform_init();
   
    /* initialize game engine */
    engine_init();

    /* enter main game loop */
    engine_loop();

    /* leave the platform */
    platform_exit();

    /* all well.. */
    return 0;
}