/*
 * list.h
 *
 * Linked list structures and definitions header.
 *
 * MIT License (see: LICENSE)
 * copyright 2022 tomaz stih
 *
 * 16.08.2022   tstih
 *
 */
#ifndef __LIST_H__
#define __LIST_H__

#include <stdbool.h>

/* Each linked list must start with list_header. */
typedef struct list_header_s {
	void *next;
} list_header_t;

/* Functions. */
extern list_header_t *list_find(
        list_header_t *first,
        list_header_t **prev,
        bool (*match)(list_header_t *p, void *parg),
        void *parg);
extern list_header_t *list_insert(list_header_t** first, list_header_t *el);
extern list_header_t *list_append(list_header_t** first, list_header_t *el);
extern list_header_t *list_remove(list_header_t **first, list_header_t *el);
extern list_header_t *list_remove_first(list_header_t **first);

#endif /* __LIST_H__ */