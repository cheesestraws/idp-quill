/*
 * gtty.c
 *
 * graphical tty 
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2023 Tomaz Stih
 *
 * 21.01.2023   tstih
 *
 */
#include <platform/gtty.h>

tty_t *tty_create(rect_t *r, char *chars) {
    /* create buffered tty */
    tty_t *result=calloc(sizeof(tty_t),1);
    /* store rectangle area and size */
    memcpy(&(result->area),r,sizeof(rect_t));
    /* initial coords are 0,0 */
    result->x=r->x0;
    result->y=r->y0;
    /* contents... */
    result->chars=chars;
    result->chars[0]=0; /* terminate! */
    return result;
}

void tty_destroy(tty_t *tty) {
    free(tty);
}

static void _tty_nl(tty_t *tty) {
    tty->x = tty->area.x0;
    tty->y = tty->y + tty->last_height; 
    /* TODO: will it fit vertically? */
}

/* output single word! */
static void _tty_wout(tty_t *tty, void *font, const char *text) {
    
    /* measure the word... */
    dim_t dim;
    gmetext(font,(char*)text,&dim);

    /* if no last height, set to current */
    if (!tty->last_height) tty->last_height=dim.h;
    /* will it fit horizontally */
    if (tty->x + dim.w > tty->area.x1) _tty_nl(tty);
    /* print it, increase coordinates */
    gputtext(font,(char *)text,tty->x,tty->y);
    tty->x = tty->x + dim.w;
    if (tty->last_height < dim.h) tty->last_height=dim.h;
    /* and append to string */
    while(*text) {
        tty->chars[tty->last_pos]=*text;
        text++;
        tty->last_pos = tty->last_pos + 1;
    }
    tty->chars[tty->last_pos]=0;
}

void tty_print(tty_t *tty, void *font, const char *text) {
    
    /* extract word by word and add
       to bottom and print... */
    char *pbrk=(char *)text;
    char prev;

    while(*pbrk) {
        if (*pbrk=='\n' || *pbrk==' ') {
            prev=*pbrk;
            /* temporary terminate string */
            *pbrk=0;
            /* draw word, this will break it if no space */
            _tty_wout(tty, font, text);
            /* restore previous character */
            *pbrk=prev;
            /* and handle it */
            if (*pbrk==' ') 
                _tty_wout(tty,font," ");
            else
                _tty_nl(tty);
            /* next word! */
            text=pbrk+1;
        }
        pbrk++;
    }
    /* last part... */
    if (*text) _tty_wout(tty,font,text);
}

void tty_cls(tty_t *tty) {
    gsetcolor(CO_BACK);
    gfillrect(&(tty->area));
    gsetcolor(CO_FORE);
    tty->x = tty->area.x0;
    tty->y = tty->area.y0;
    tty->chars[0]=0;
    tty->last_pos=0;
    tty->last_height=0;
}