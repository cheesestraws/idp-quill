/*
 * platform.c
 *
 * platform specific functions (linux)
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 10.11.2022   tstih
 *
 */
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Call bdos function 10 C_READSTR! */
extern unsigned char bdos(unsigned char fn, unsigned int param);
#define C_READSTR 10

char* platform_readline(char *out, uint8_t maxchars) {
    /* how many characters were read */
    uint8_t numchars;

    /* allocate required buffer. */
    char *mem=malloc(maxchars + 2);
    mem[0]=maxchars; /* limit number of chars */
    bdos(C_READSTR,(unsigned int)mem); /* read chars from console... */

    /* extract length */
    numchars=mem[1];

    /* copy buffer to output and zero terminate it! */
    memcpy(out, &(mem[2]), numchars);
    out[numchars]=0;

    /* free the buffer */
    free(mem);

    /* and return string */
    return out;
}

void platform_clear(uint8_t area) { area; } /* no clear! */

void platform_write(uint8_t area, const char *s, bool newline) {
    area;
    printf("%s",s);
    if (newline) printf("\n\n");
}

int platform_rndgen() {
    return 1 + (rand() % 100);
}

/* we'll pretend its already pressed */
int platform_kbhit() { return kbhit();} 

/* nothing, for now... */
void platform_pause(int s50) {
    s50;
 }