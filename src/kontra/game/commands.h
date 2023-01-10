/*
 * commands.h
 *
 * game commands header
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 04.12.2022   tstih
 *
 */
#ifndef __COMMANDS_H__
#define __COMMANDS_H__

#include <stdint.h>
 
/* number of command arguments */
#define CMD_PARBIT      0xC0    /* bits for parameters */
#define CMD_NOPARS      0x00
#define CMD_1PAR        0x40
#define CMD_2PARS       0x80
#define CMD_ESC         0xC0    /* escape sequence */

/* is command condition or action? */
#define CMD_TYPBIT      0x20    /* bits for command type */
#define CMD_CND         0x00
#define CMD_ACT         0x20

#define CMD_FNBIT       0x1F    /* function bits */

/* function codes */
#define FN_EOF          (uint8_t)( 0x00 + CMD_ESC ) /* end of function */
/* conditions */
#define FN_AT           (uint8_t)(   1 + CMD_CND + CMD_1PAR )   /* at condition */
#define FN_CARRIED      (uint8_t)(   2 + CMD_CND + CMD_1PAR )
#define FN_NOTCARR      (uint8_t)(   3 + CMD_CND + CMD_1PAR )
#define FN_LT           (uint8_t)(   4 + CMD_CND + CMD_2PARS )
#define FN_GT           (uint8_t)(   5 + CMD_CND + CMD_2PARS )
#define FN_EQ           (uint8_t)(   6 + CMD_CND + CMD_2PARS )
#define FN_NOTAT        (uint8_t)(   7 + CMD_CND + CMD_1PAR )
#define FN_ATLT         (uint8_t)(   8 + CMD_CND + CMD_1PAR )
#define FN_WORN         (uint8_t)(   9 + CMD_CND + CMD_1PAR )
#define FN_NOTWORN      (uint8_t)(  10 + CMD_CND + CMD_1PAR )
#define FN_PRESENT      (uint8_t)(  11 + CMD_CND + CMD_1PAR )
#define FN_ABSENT       (uint8_t)(  12 + CMD_CND + CMD_1PAR )
#define FN_ZERO         (uint8_t)(  13 + CMD_CND + CMD_1PAR )
#define FN_NOTZERO      (uint8_t)(  14 + CMD_CND + CMD_1PAR )
#define FN_CHANCE       (uint8_t)(  15 + CMD_CND + CMD_1PAR )

/* actions */
#define FN_GOTO         (uint8_t)(   1 + CMD_ACT + CMD_1PAR )   /* goto action */
#define FN_DESC         (uint8_t)(   2 + CMD_ACT + CMD_NOPARS ) /* desc action */
#define FN_QUIT         (uint8_t)(   3 + CMD_ACT + CMD_NOPARS ) /* quit game! */
#define FN_BEEP         (uint8_t)(   4 + CMD_ACT + CMD_2PARS )  /* play sound  */
#define FN_SET          (uint8_t)(   5 + CMD_ACT + CMD_1PAR ) 
#define FN_CLEAR        (uint8_t)(   6 + CMD_ACT + CMD_1PAR ) 
#define FN_REMOVE       (uint8_t)(   7 + CMD_ACT + CMD_1PAR ) 
#define FN_MESSAGE      (uint8_t)(   8 + CMD_ACT + CMD_1PAR ) 
#define FN_DROP         (uint8_t)(   9 + CMD_ACT + CMD_1PAR ) 
#define FN_WEAR         (uint8_t)(  10 + CMD_ACT + CMD_1PAR ) 
#define FN_PAUSE        (uint8_t)(  11 + CMD_ACT + CMD_1PAR ) 
#define FN_CREATE       (uint8_t)(  12 + CMD_ACT + CMD_1PAR ) 
#define FN_DESTROY      (uint8_t)(  13 + CMD_ACT + CMD_1PAR )
#define FN_SWAP         (uint8_t)(  14 + CMD_ACT + CMD_2PARS ) 
#define FN_PLUS         (uint8_t)(  15 + CMD_ACT + CMD_2PARS ) 
#define FN_MINUS        (uint8_t)(  16 + CMD_ACT + CMD_2PARS ) 
#define FN_LET          (uint8_t)(  17 + CMD_ACT + CMD_2PARS ) 
#define FN_OK           (uint8_t)(  18 + CMD_ACT + CMD_NOPARS ) 
#define FN_DONE         (uint8_t)(  19 + CMD_ACT + CMD_NOPARS ) 
#define FN_TURNS        (uint8_t)(  20 + CMD_ACT + CMD_NOPARS ) 
#define FN_INVEN        (uint8_t)(  21 + CMD_ACT + CMD_NOPARS ) 
#define FN_END          (uint8_t)(  22 + CMD_ACT + CMD_NOPARS ) 
#define FN_SAVE         (uint8_t)(  23 + CMD_ACT + CMD_NOPARS ) 
#define FN_LOAD         (uint8_t)(  24 + CMD_ACT + CMD_NOPARS ) 
#define FN_ANYKEY       (uint8_t)(  25 + CMD_ACT + CMD_NOPARS ) 
#define FN_SCORE        (uint8_t)(  26 + CMD_ACT + CMD_NOPARS )
#define FN_GET          (uint8_t)(  27 + CMD_ACT + CMD_1PAR ) 

/* command type: connection, action or process*/
#define CMD_PROC        0x00
#define CMD_CONN        0x01
#define CMD_ACTI        0x02

typedef struct command_s {
    uint8_t fcode;      /* function code */
    uint16_t wpair;     /* word pair HI=word id 1, LO=word id 2*/
    uint16_t codeloc;   /* code location in the code table */
} command_t;

/* command functions (programs) */
extern const uint8_t func[];

#endif /* __COMMANDS_H__ */