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
#define C_READSTR   10
#define C_WRITE     2

void _printstring(const char *s) {
    /* first write string*/
    while(*s) { 
        if (*s=='\n') bdos(C_WRITE,'\r');
        bdos(C_WRITE,*s++); 
    }
}

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
    if (numchars>0) 
        memcpy(out, &(mem[2]), numchars);
    out[numchars]=0;

    /* free the buffer */
    free(mem);

    /* add newline */
    _printstring("\n");    

    /* and return string */
    return out;
}

void platform_clear(uint8_t area) { area; } /* no clear! */

void platform_write(uint8_t area, const char *s, bool newline) {
    area;
    _printstring(s);
    if (newline) _printstring("\n");
}

int platform_rndgen() {
    return 1 + (rand() % 100);
}

/* we'll pretend its already pressed */
int platform_kbhit() { return kbhit();} 

/* Non standard function to sleep (in milliseconds) */
void _msleep(int millisec) {
    millisec;
    /* For 1 millisec we need to sleep 
       0.001/(1/4000000)=4000 t-states,
       but  
        ...outer loop adds 38 t-states 
        ...push and pop commands add 42 t-states to everything 
       so we need 3962 t-states for 1ms + outer loop overhead */
    __asm
        pop     de                      ; return address
        pop     hl                      ; milliseconds
        ;; restore stack
        push    hl 
        push    de
        ;; now count hl
    msl_loop:
        ld      b,#233                  ; 7 t-states outer counter 
        ;; inner loop is 17 * 233 t-states = 3961 t-states
    msl_inner_loop:
        nop                             ; 4 t-states
        djnz    msl_inner_loop          ; 13/8 t-states
        ;; and loop.
        ;; this loop and ld b adds 38 t-states to each millisecond
        dec     hl                      ; 6 t-states
        ld      a,h                     ; 9 t-states
        or      l                       ; 4 t-states
        jr      nz,msl_loop             ; 12/7 t-states
    __endasm;
}



/* nothing, for now... */
void platform_pause(int s50) {
    _msleep(20*s50);
 }
