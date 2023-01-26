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
#include <ugpx.h>

#include <game/engine.h>

#include <platform/platform.h>
#include <platform/gex.h>
#include <platform/gtty.h>

/* current graphical font */
#define FONT_NAME bc_font
extern void *FONT_NAME;

/* terminal (tty) settings */
#define TTY_BUFF_LEN    0xff
static tty_t *_ttyd;
static uint8_t _ttyd_buffer[TTY_BUFF_LEN];

/* top and bottom rectangles*/
#define TOP_RECT { 512, 0, 1023, 127 }
#define BOT_RECT { 512, 132, 1023, 255 } 
static rect_t 
    _topr =  TOP_RECT, 
    _botr = BOT_RECT;

/* CP/M text only print string */
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

void platform_init() {
    ginit(RES_1024x256);
    gcls();
    _printstring("\n\n");
    _ttyd=tty_create(&_topr,_ttyd_buffer);
}

void platform_exit() {
    tty_destroy(_ttyd);
    gcls();
    gexit();
}

/* hybrid write: text and graphics */
void platform_write(uint8_t area, const char *s, bool newline) {
    if (area==AREA_LOCATION)            
        tty_print(
            _ttyd,
            &FONT_NAME,
            s);
    else
        _printstring(s);
    
    if (newline) {
        if (area==AREA_LOCATION) 
            tty_print(
                _ttyd,
                &FONT_NAME,
                "\n");
        else
            _printstring("\n");
    }
}

/* CP/M text only readline */
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

/* clear all graphics from the screen */
void platform_clear(uint8_t area) { 
    area;
    tty_cls(_ttyd);
}

/* draw image (if it exists), relayout
   text and image rectangles... */
static uint8_t _last_location=0;
void platform_image(uint8_t index) {
    /* don't redraw if already drawn...*/
    if (index==_last_location) return; 
    _last_location=index;
    /* if first visit then clear */
    tty_cls(_ttyd);
    void *image=gex_query_image(index);
    if (image!=NULL) {
        memcpy(&(_ttyd->area),&_botr,sizeof(rect_t));
        _ttyd->y=_ttyd->area.y0;
        gex_draw_image(image, 512, 0);
        gex_release_image(image);
    } else {
        memcpy(&(_ttyd->area),&_topr,sizeof(rect_t));
        _ttyd->y=_ttyd->area.y0;
        gsetcolor(CO_BACK);
        gfillrect(&_topr);
        gsetcolor(CO_FORE);
    }
}

/* we'll pretend its already pressed */
int platform_kbhit() { return kbhit();} 

/* generate random between 1 and 100 */
int platform_rndgen() {
    return 1 + (rand() % 100);
}

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
