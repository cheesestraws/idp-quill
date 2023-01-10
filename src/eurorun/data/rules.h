/*
 * rules.h
 *
 * game rules header
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2023 Tomaz Stih
 *
 * 10.01.2023   tstih
 *
 */
#ifndef __RULES_H__
#define __RULES_H__

#include <stdint.h>

#include <game/commands.h>

/* number of all rules */
#define NUM_RULES   523

/* collection of rules */
extern const command_t rules[];

#endif /* __RULES_H__ */