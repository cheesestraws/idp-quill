/*
 * words.h
 *
 * game word structure
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2023 Tomaz Stih
 *
 * $DATE$   tstih
 *
 */
#ifndef __WORDS_H__
#define __WORDS_H__

#include <stdint.h>

#define NWORDS $NUM$

typedef struct word_s {
    char *word;
    uint8_t id;
} word_t;

extern const word_t words[];

#endif /* __WORDS_H__ */