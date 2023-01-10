/*
 * rules.h
 *
 * game rules header
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 22.12.2022   tstih
 *
 */
#ifndef __RULES_H__
#define __RULES_H__

#include <stdint.h>

#include <game/commands.h>

/* number of all rules */
#define NUM_RULES   759

/* collection of rules */
extern const command_t rules[];

#endif /* __RULES_H__ */