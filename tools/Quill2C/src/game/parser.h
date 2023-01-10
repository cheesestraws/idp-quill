/*
 * parser.h
 *
 * the quill parser header
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 10.11.2022   tstih
 *
 */
#ifndef __PARSER_H__
#define __PARSER_H__

#include <stdint.h>

#define WORD_ABSENT     0x00
#define WORD_UNKNOWN    0xff

extern uint16_t parse(char *s);

#endif /* __PARSER_H__ */