/*
 * functions.c
 *
 * the quill functions.
 * 
 * NOTES:
 *  each command is 1 byte long.
 *  here is the encoding bitmask.
 * 
 *    7   6   5   4   3   2   1   0
 *  ┌───┬───┬───┬───┬───┬───┬───┬───┐
 *  │ p │ p │ t │ c │ c │ c │ c │ c │
 *  └───┴───┴───┴───┴───┴───┴───┴───┘
 * 
 *  pp = number of parameters 00=0, 01=1, 10=2, 11= escape sequence
 *  t = command type (0=condition, 1=action)
 *  ccccc = command code
 *  when pp=11 (escape sequence), then escape command is encoded as
 *
 *    7   6   5   4   3   2   1   0
 *  ┌───┬───┬───┬───┬───┬───┬───┬───┐
 *  │ 1 │ 1 │ x │ x │ x │ x │ x │ 0 │   END OF COMMAND sequence
 *  └───┴───┴───┴───┴───┴───┴───┴───┘
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 26.10.2022   tstih
 *
 */
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include <data/locations.h>
#include <data/objects.h>
#include <data/messages.h>
#include <data/sysmessages.h>
#include <data/rules.h>
#include <data/words.h>

#include <game/functions.h>
#include <game/engine.h>

#include <platform/platform.h>

void dflag(uint8_t flag,int8_t delta) {
    if ( (engine()->flags[flag] + delta) >= 0)
        engine()->flags[flag] = engine()->flags[flag] + delta;
}

static bool _yesno() {
    platform_write(AREA_MESSAGES,"(",false);
    platform_write(AREA_MESSAGES,sys_messages[SM_YES],false);
    platform_write(AREA_MESSAGES,"/",false);
    platform_write(AREA_MESSAGES,sys_messages[SM_NO],false);
    platform_write(AREA_MESSAGES,")?",false);

    /* wait for keypress... */
    int ch=0;
    while (ch==0) ch=platform_kbhit();
    
    /* newline */
    platform_write(AREA_MESSAGES,"",true);

    /* is it yes? */
    ch=toupper(ch);
    return (ch==((sys_messages[SM_YES])[0]));
}

static char *_itoa(int val, char *result) {
    /* zero is special case... */
    if (!val) {
        result[0]='0'; result[1]=0; return result;
    }
    /* convert! */
    bool first=true;
    uint8_t pos=0;
    int div=10000;
    while (div!=0) {
        int digit=val/div;
        val-=(digit*div);
        div/=10;
        if (!first)
            result[pos++]=(digit+'0');
        else if (digit!=0) {
            result[pos++]=(digit+'0');
            first=false;
        }
    }
    result[pos]=0;
    return result;
}

/* ------------------------------------------------------------------------- */

/* no function, placeholder for 0 */
int null() {
    return R_SUCCESS;
}

/* check if we are at location? */
int at(uint8_t location) {
    return (engine()->location==location) ? R_SUCCESS : R_FAIL;
}

/* check if we are not at location? */
int not_at(uint8_t location) {
    return !at(location);
}

/* check if we are not at location lower than? */
int at_lower_than(uint8_t location) {
    return (engine()->location < location) ? R_SUCCESS : R_FAIL;
}

/* do we carry an object */
int carried(uint8_t object) {
    return (engine()->objects)[object].slocid==O_CARRIED ? R_SUCCESS : R_FAIL;
}

/* is the object not carried? */
int not_carried(uint8_t object) {
    return !carried(object);
}

/* is object worn? */
int worn(uint8_t object) {
    return (engine()->objects)[object].slocid==O_WORN ? R_SUCCESS : R_FAIL;
}

/* is object not worn? */
int not_worn(uint8_t object) {
    return !worn(object);
}

/* is object present? */
int present(uint8_t object) {
    return (
        engine()->location == engine()->objects[object].slocid /* present?*/
        || engine()->objects[object].slocid == O_WORN
        || engine()->objects[object].slocid == O_CARRIED) ? 
        R_SUCCESS : R_FAIL;
}

/* is object absent? */
int absent(uint8_t object) {
    return !present(object);
}

int lower_than(uint8_t flag, uint8_t value) {
    return (engine()->flags[flag] < value) ?
        R_SUCCESS : R_FAIL;
}

int greater_than(uint8_t flag, uint8_t value) {
    return (engine()->flags[flag] > value) ?
        R_SUCCESS : R_FAIL;
}

int equal(uint8_t flag, uint8_t value) {
    return (engine()->flags[flag] == value) ?
        R_SUCCESS : R_FAIL;
}

/* check if flag iz zero */
int zero(uint8_t flag) {
    return (engine()->flags[flag] == 0) ?
        R_SUCCESS : R_FAIL;
}

/* check if flag is not zero */
int not_zero(uint8_t flag) {
    return !zero(flag);
}

/* random */
int chance(uint8_t percent) {
    return platform_rndgen() <= (int)percent ? R_SUCCESS : R_FAIL;
}


/* ------------------------------------------------------------------------- */


/* move to location */
int go(uint8_t location) {
    engine()->location=location;
    return R_SUCCESS;
}

/* (current) location description */
int desc() {

    /* autodecrease flag */
    dflag(FLG_DSC,-1);
    int i,j;

    /* clear platform area */
    platform_clear(AREA_LOCATION);

    platform_image(engine()->location);

    /* its dark */
    if (engine()->flags[FLG_DARK]) {
        dflag(FLG_DSCD,-1);
        /* is object 0 absent? */
        if (engine()->location!=engine()->objects[LIGHTOBJ].slocid) {
            dflag(FLG_DSCDO0,-1);
            platform_write(AREA_LOCATION,sys_messages[SM_ITS_DARK],true);
        } else /* dark, but with object 0 */
            platform_write(AREA_LOCATION,locations[engine()->location],true);
    }

    /* there's a light or a source of light */
    if (!(engine()->flags[FLG_DARK]) 
        || engine()->location==engine()->objects[LIGHTOBJ].slocid
    ) {
        /* First the location. */
        platform_write(AREA_LOCATION,locations[engine()->location],true);
        
        /* Now the directions. */
        char separator='\0';
        for(i=0;i<NUM_RULES;i++) {
            /* it's a connection from current location! */
            if (rules[i].fcode==CMD_CONN && 
                func[rules[i].codeloc + 1] == engine()->location
            ) {
                /* now find the word with index rules[i].wpair */
                for(j=0;j<NWORDS;j++)
                    if (words[j].id==rules[i].wpair) {
                        /* if it is the first word then separator will be \0 */
                        if (separator=='\0') {
                            platform_write(AREA_LOCATION,sys_messages[SM_DIRECTIONS],false);
                            platform_write(AREA_LOCATION,words[j].word,false);
                            separator=',';
                        } else {
                            platform_write(AREA_LOCATION,", ",false);
                            platform_write(AREA_LOCATION,words[j].word,false);
                        }
                        break;
                    }
            }
        }
        if (separator=='\0')
            platform_write(AREA_LOCATION,sys_messages[SM_NO_WAY_OUT],true);
        else 
            platform_write(AREA_LOCATION,sys_messages[SM_DOT],true);

        /* Now the inventory. */
        bool foundany=false;
        for(i=0; i<NUMOBJECTS; i++) {
            if (engine()->location==engine()->objects[i].slocid) {
                if (!foundany) {
                    platform_write(AREA_INVENTORY,sys_messages[SM_I_ALSO_SEE],true);
                    foundany=true;
                }
                platform_write(AREA_INVENTORY,engine()->objects[i].name,true);
            }
        }
    } 

    /* don't exec. next action. */
    engine()->done=true;

    return R_SUCCESS;
}

int inven() {

    /* print inventory */
    platform_write(AREA_INVENTORY,sys_messages[SM_CARRYING],true);
    bool foundany=false;
    for(uint8_t i=0; i<NUMOBJECTS; i++) {
        if (engine()->objects[i].slocid==O_CARRIED) {
            foundany=true;
            platform_write(AREA_INVENTORY,engine()->objects[i].name,true);
        }
        else if (engine()->objects[i].slocid==O_WORN) {
            foundany=true;
            platform_write(AREA_INVENTORY,engine()->objects[i].name,false);
            platform_write(AREA_INVENTORY,sys_messages[SM_WORN],true);
        }
    }
    /* if we didn't find any... */
    if (!foundany)
        platform_write(AREA_INVENTORY,sys_messages[SM_CARR_NOTHING],true);

    engine()->done=true;
    return R_SUCCESS;
}

/* guit game! */
int quit() {
    /* ask the user if he wants to quit? */
    platform_write(AREA_MESSAGES,sys_messages[SM_WANNA_QUIT],true);
    if (_yesno()) {
        platform_write(AREA_MESSAGES,sys_messages[SM_THEEND],true);
        engine()->quit=true;
    }
        engine()->done=true;
    return R_SUCCESS;
}

int end() {
    engine()->quit=true;
    return R_SUCCESS;
}

/* beep! */
int beep(uint8_t snd, uint8_t duration) {
    snd; duration;
    return R_SUCCESS;
}

/* set flag to 255 */
int set(uint8_t flag) {
    engine()->flags[flag]=0xff;
    return R_SUCCESS;
}

/* clear flag (0) */
int clear(uint8_t flag) {
    engine()->flags[flag]=0;
    return R_SUCCESS;
}

/* remove object */
int oremove(uint8_t object) {
    if ((engine()->objects)[object].slocid!=O_WORN) {
        platform_write(AREA_MESSAGES,sys_messages[SM_NOT_WEARING],true);
        engine()->done=true;
    } else {
        if (engine()->flags[FLG_COUNT_CARR] == MAXCARR) {
            platform_write(AREA_MESSAGES,sys_messages[SM_HANDS_FULL],true);
            engine()->done=true;
        } else {
            engine()->flags[FLG_COUNT_CARR] = 
                engine()->flags[FLG_COUNT_CARR] + 1;
            (engine()->objects)[object].slocid=O_CARRIED;
        }
    }
    return R_SUCCESS;
}

/* get the object */
int get(uint8_t object) {

    /* already worn or carried? */
    if ((engine()->objects)[object].slocid==O_WORN
        || (engine()->objects)[object].slocid==O_CARRIED
    ) {
        platform_write(AREA_MESSAGES,sys_messages[SM_ALREADY_HAVE],true);
        engine()->done=true;
    } else if (engine()->objects[object].slocid!=engine()->location) {
        platform_write(AREA_MESSAGES,sys_messages[SM_NOT_HERE],true);
        engine()->done=true;
    } else if (engine()->flags[FLG_COUNT_CARR] == MAXCARR) {
        platform_write(AREA_MESSAGES,sys_messages[SM_TOO_HEAVY],true);
        engine()->done=true;
    } else {
        dflag(FLG_COUNT_CARR,+1);
        engine()->objects[object].slocid=O_CARRIED;
    }
    return R_SUCCESS;
}

int drop(uint8_t object) {
    /* not carried or worn ? */
    if ((engine()->objects)[object].slocid!=O_WORN
        && (engine()->objects)[object].slocid!=O_CARRIED
    ) {
        platform_write(AREA_MESSAGES,sys_messages[SM_DONT_HAVE],true);
        engine()->done=true;
    } else {
        engine()->objects[object].slocid=engine()->location;
        dflag(FLG_COUNT_CARR,-1);
    }
    return R_SUCCESS;
}

/* print message */
int message(uint8_t msgid) {
    platform_write(AREA_MESSAGES,messages[msgid], true);
    return R_SUCCESS;
}

int wear(uint8_t object) {
    if (engine()->objects[object].slocid==O_WORN) {
        platform_write(AREA_MESSAGES,sys_messages[SM_ALREADY_WEARING],true);
        engine()->done=true;
    } else if (engine()->objects[object].slocid!=O_CARRIED) {
        platform_write(AREA_MESSAGES,sys_messages[SM_DONT_HAVE],true);
        engine()->done=true;
    } else {
        (engine()->objects)[object].slocid=O_WORN;
        dflag(FLG_COUNT_CARR,+1);
    }
    return R_SUCCESS;
}

int pause(uint8_t period) {
    platform_pause(period);
    return R_SUCCESS;
}

int create(uint8_t object) {
    if (engine()->objects[object].slocid==O_WORN) 
        dflag(FLG_COUNT_CARR,-1);
    engine()->objects[object].slocid=engine()->location;
    return R_SUCCESS;
}

int destroy(uint8_t object) {
    if (engine()->objects[object].slocid==O_WORN
        || engine()->objects[object].slocid==O_CARRIED) 
        dflag(FLG_COUNT_CARR,-1);
    engine()->objects[object].slocid=O_NOTCRE;
    return R_SUCCESS;
}

int swap(uint8_t object1, uint8_t object2) {
    uint8_t tmp=(engine()->objects)[object1].slocid;
    engine()->objects[object1].slocid=engine()->objects[object2].slocid;
    engine()->objects[object2].slocid=tmp;
    return R_SUCCESS;
}

int plus(uint8_t flag, uint8_t value) {
    engine()->flags[flag]=engine()->flags[flag]+value;
    return R_SUCCESS;
}

int minus(uint8_t flag, uint8_t value) {
    engine()->flags[flag]=engine()->flags[flag]-value;
    return R_SUCCESS;
}

int let(uint8_t flag, uint8_t value) {
    engine()->flags[flag]=value;
    return R_SUCCESS;
}

int ok() {
    platform_write(AREA_MESSAGES,sys_messages[SM_OK], true);
    engine()->done=true;
    return R_SUCCESS;
}

int done() {
    engine()->done=true;
    return R_SUCCESS;
}

/* not implementd! */
int save() {
    platform_write(AREA_MESSAGES,sys_messages[SM_DONT_UNDERSTAND],true);
    engine()->done=true;
    return R_FAIL;
}

/* not implemented! */
int load() {
    platform_write(AREA_MESSAGES,sys_messages[SM_DONT_UNDERSTAND],true);
    engine()->done=true;
    return R_FAIL;
}

int anykey() {
    platform_write(AREA_MESSAGES,sys_messages[SM_PRESS_ANY_KEY], true);
    while (!platform_kbhit()) {}
    return R_SUCCESS;
}

int turns() {
    char sturns[6];
    
    /* flags for turns have to be combined*/
    int turns=engine()->flags[FLG_TURNS_LO] + 
        ((engine()->flags[FLG_TURNS_HI])<<8);
    _itoa(turns,sturns);
    /* display number of turns */
    platform_write(AREA_MESSAGES, sys_messages[SM_YOU_HAVE_TAKEN], false);
    platform_write(AREA_MESSAGES, sturns, false);
    platform_write(AREA_MESSAGES, sys_messages[SM_TURN],false);
    if (turns>1) 
        platform_write(AREA_MESSAGES, sys_messages[SM_TURNS_PLURAL], false);
    platform_write(AREA_MESSAGES, sys_messages[SM_DOT], true);

    return R_SUCCESS;
}

int score() {
    char sscore[6];
    /* flag 30 holds score*/
    _itoa(engine()->flags[FLG_SCORE],sscore);
    /* display percent complete */
    platform_write(AREA_MESSAGES, sys_messages[SM_YOU_HAVE_SCORED], false);
    platform_write(AREA_MESSAGES, sscore, false);
    platform_write(AREA_MESSAGES, sys_messages[SM_PERCENT], false);
    platform_write(AREA_MESSAGES, sys_messages[SM_DOT], true);
    return R_SUCCESS;
}

/* ------------------------------------------------------------------------- */

/* condition function table */
void* cndtbl[] = {
    (void *)(&null)
    ,(void *)(&at)
    ,(void *)(&carried)
    ,(void *)(&not_carried) 
    ,(void *)(&lower_than)
    ,(void *)(&greater_than)
    ,(void *)(&equal) 
    ,(void *)(&not_at)
    ,(void *)(&at_lower_than)
    ,(void *)(&worn)
    ,(void *)(&not_worn) 
    ,(void *)(&present)
    ,(void *)(&absent)
    ,(void *)(&zero) 
    ,(void *)(&not_zero)
    ,(void *)(&chance)
};

/* action function table */
void* acttbl[] = {
    (void *)(&null)         
    ,(void *)(&go)
    ,(void *)(&desc)
    ,(void *)(&quit)
    ,(void *)(&beep)
    ,(void *)(&set)
    ,(void *)(&clear)
    ,(void *)(&oremove)
    ,(void *)(&message)
    ,(void *)(&drop)
    ,(void *)(&wear)
    ,(void *)(&pause)
    ,(void *)(&create)
    ,(void *)(&destroy)
    ,(void *)(&swap)
    ,(void *)(&plus)
    ,(void *)(&minus)
    ,(void *)(&let)
    ,(void *)(&ok)
    ,(void *)(&done)
    ,(void *)(&turns)
    ,(void *)(&inven)
    ,(void *)(&end)
    ,(void *)(&save)
    ,(void *)(&load)
    ,(void *)(&anykey)
    ,(void *)(&score)
    ,(void *)(&get)
};