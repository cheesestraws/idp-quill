/*
 * engine.c
 *
 * Game engine. Contains game state and main
 * program flow. This module is called from the
 * main() function.
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 13.11.2022   tstih
 *
 */
#include <stdbool.h>
#include <stdio.h>

#include <data/rules.h>
#include <data/sysmessages.h>

#include <game/parser.h>
#include <game/engine.h>
#include <game/functions.h>
#include <data/objects.h>

#include <platform/platform.h>

/* game engine */
static engine_t _engine;

/* function pointers */
typedef int ((*tfp0)());
typedef int ((*tfp1)(uint8_t p1));
typedef int ((*tfp2)(uint8_t p1, uint8_t p2));
tfp0 cfp0;
tfp1 cfp1;
tfp2 cfp2;

/* and function tables */
extern void* cndtbl[];
extern void* acttbl[];

engine_t *engine() {
    return &_engine;
}

void engine_init() {
    /* initial location */
    engine()->location = 0;
    /* deconst objects collection */
    engine()->objects = (object_t *)objects;
    /* quit and done processing to false */
    engine()->quit=false;
    engine()->done=false;
    /* flags to 0, except flag 1 ... max allowed carried objects  */
    int i;
    for(i=0;i<MAX_FLAGS;i++)
        engine()->flags[i]=0;
    /* now set flags to num of carried objects*/
    int carried=0;
    for(i=0;i<NUMOBJECTS;i++)
        if (engine()->objects[i].slocid==O_CARRIED)
            carried++;
    engine()->flags[FLG_COUNT_CARR]=carried;
}

static bool _engine_exec(uint16_t codeloc) {

    /* as long as there are program bytes */
    while(
        func[codeloc]!=FN_EOF           /* exec all commands in chain unless ... */
        && !(engine()->done)            /* ...done or...*/
        && !(engine()->quit)            /* ...quit! */
    ) {
        /* extract function id */
        uint8_t fnid = func[codeloc] & CMD_FNBIT;

        /* get the right table */
        void **fntable;
        bool condition=(func[codeloc] & CMD_TYPBIT) == CMD_CND;
        fntable=condition ? cndtbl : acttbl;

        /* call the function */
        int result=R_SUCCESS;
        if ((func[codeloc] & CMD_PARBIT) == CMD_NOPARS) {
            cfp0 = (tfp0)(fntable[fnid]);
            result=cfp0();
            codeloc++;
        } else if ((func[codeloc] & CMD_PARBIT) == CMD_1PAR) {
            cfp1 = (tfp1)(fntable[fnid]);
            result=cfp1(func[codeloc+1]);
            codeloc+=2;
        } else if ((func[codeloc] & CMD_PARBIT) == CMD_2PARS) {
            cfp2 = (tfp2)(fntable[fnid]);
            result=cfp2(func[codeloc+1], func[codeloc+2]);
            codeloc+=3;
        }

        /* did not succeed */
        if (result==R_FAIL)
            return false;
    }

    return true;
}

extern void dflag(uint8_t flag,int8_t delta);
static void _turn() {
    /* dec flags 5-8 */
    dflag(FLG_CMD0,-1);
    dflag(FLG_CMD1,-1);
    dflag(FLG_CMD2,-1);
    dflag(FLG_CMD3,-1);
    /* if dark then dec flag 9 */
    if (engine()->flags[FLG_DARK]) {
        dflag(FLG_CMDD,-1);
        if (engine()->objects[LIGHTOBJ].slocid!=engine()->location)
            dflag(FLG_CMDDO0,-1);
    }
    /* increment turns. */
    if (engine()->flags[FLG_TURNS_LO]==0xff) {
        engine()->flags[FLG_TURNS_LO]=0;
        dflag(FLG_TURNS_HI,+1);
    } else dflag(FLG_TURNS_LO,+1);
}

extern int desc();
void engine_loop() {   

    /* initial desc ...*/
    desc();

    do {

        /* processes... */
        int rule=0; engine()->done=false;
        while(rule++<NUM_RULES && !(engine()->done)) {
            if (rules[rule].fcode==CMD_PROC) /* process always executes */
                _engine_exec(rules[rule].codeloc);
        }

        /* random what to do? */
        int msg = SM_WHATS_NEXT1 + platform_rndgen() % 4;
        platform_write(AREA_INPUT, sys_messages[msg],true);

        /* get command form the user. */
        platform_write(AREA_INPUT,">",false); 
        platform_readline(engine()->input, MAX_INPUT_LEN);
        platform_write(AREA_INPUT,"\n\n",false); 

        /* parse it! */
        uint16_t cmd=parse(engine()->input);
      
        /* actions... */
        rule=0; engine()->done=false;
        bool processed=false; /* match made? */
        while(rule++<NUM_RULES && !(engine()->done))
            if (rules[rule].wpair==cmd) /* word matches */
                processed |= _engine_exec(rules[rule].codeloc);

        if (!processed) {
            if ((cmd&0x00ff)<13)
                platform_write(AREA_INPUT, sys_messages[SM_NO_DIRECTION],true);
            else
                platform_write(AREA_INPUT, sys_messages[SM_DONT_UNDERSTAND],true);
        }

        /* process turn actions */
        _turn();

    } while (!(engine()->quit));
}