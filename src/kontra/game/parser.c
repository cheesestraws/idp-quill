/*
 * parser.c
 *
 * Function to parse quill command and 
 * return keyword identifiers.
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 10.11.2022   tstih
 *
 */
#include <stdint.h>
#include <ctype.h>
#include <string.h>

#include <data/words.h>
#include <game/parser.h>

static int _strncmp( const char * s1, const char * s2, uint8_t n )
{
    while ( n && *s1 && ( *s1 == *s2 ) )
    { ++s1; ++s2; --n; }
    if ( n == 0 )
        return 0;
    else
        return ( *(unsigned char *)s1 - *(unsigned char *)s2 );
}

static uint8_t find_word(char *start) {
    uint8_t i=0;
    while (i<NWORDS) 
        if (_strncmp(start,words[i].word,4)==0)
            return words[i].id;
        else 
            i++;
    /* not found! */
    return WORD_UNKNOWN; 
}

uint16_t parse(char *s) {

    uint16_t w = WORD_ABSENT;
    char *wstart;
    uint8_t count=0;
    uint8_t windex;
    
    while(*s && count < 2) {
        /* skip any whitespace */
        while (*s==' ') s++;
        wstart=s;   /* start of word */
        /* skip alpha num. characters */
        while (isalnum(*s)) { *s=toupper(*s); s++; }
        if (s - wstart > 0) { /* if there's a word?*/
            if (count==0) {
                w = find_word(wstart);
                count++;
            } else {
                windex = find_word(wstart);
                if (windex!=WORD_UNKNOWN) {
                    w |= (windex << 8);
                    count++;
                }
            }
        }
        
    }
    return w;
}