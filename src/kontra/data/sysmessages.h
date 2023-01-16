/*
 * sysmessages.c
 *
 * system messages header file.
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 13.11.2022   tstih
 *
 */
#ifndef __SYSMESSAGES_H__
#define __SYSMESSAGES_H__

#define SM_ITS_DARK         0
#define SM_I_ALSO_SEE       1
#define SM_WHATS_NEXT1      2
#define SM_WHATS_NEXT2      3
#define SM_WHATS_NEXT3      4
#define SM_WHATS_NEXT4      5
#define SM_DONT_UNDERSTAND  6
#define SM_NO_DIRECTION     7
#define SM_CANT             8
#define SM_CARRYING         9
#define SM_WORN             10
#define SM_CARR_NOTHING     11
#define SM_WANNA_QUIT       12
#define SM_GOODBYE_RETRY    13
#define SM_THEEND           14
#define SM_OK               15
#define SM_PRESS_ANY_KEY    16
#define SM_YOU_HAVE_TAKEN   17
#define SM_TURN             18
#define SM_TURNS_PLURAL     19
#define SM_DOT              20
#define SM_YOU_HAVE_SCORED  21
#define SM_PERCENT          22
#define SM_NOT_WEARING      23
#define SM_HANDS_FULL       24   /* from WORN to CARRY */
#define SM_ALREADY_HAVE     25
#define SM_NOT_HERE         26 
#define SM_TOO_HEAVY        27  /* too many objects */
#define SM_DONT_HAVE        28
#define SM_ALREADY_WEARING  29
#define SM_YES              30
#define SM_NO               31
#define SM_DIRECTIONS       32
#define SM_NO_WAY_OUT       33

extern const char *sys_messages[];

#endif /* __SYSMESSAGES_H__ */