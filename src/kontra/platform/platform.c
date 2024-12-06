/*
 * platform.c
 *
 * platform specific functions (linux)
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 10.11.2022   tstih
 *
 */
#include <unistd.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void _printstring(const char *s) {
	printf("%s", s);
}

char* platform_readline(char *out, uint8_t maxchars) {
	char *line = NULL;
	size_t len = 0;
	ssize_t read = 0;
	
	read = getline(&line, &len, stdin);
	if (read == -1) {
		free(line);
		return NULL;
	}
	
	strncpy(out, line, maxchars);
	free(line);
	_printstring("\n");
	return out;
}

void platform_clear(uint8_t area) { } /* no clear! */

void platform_write(uint8_t area, const char *s, bool newline) {
    _printstring(s);
    if (newline) _printstring("\n");
}

int platform_rndgen() {
    return 1 + (rand() % 100);
}

/* we'll pretend its already pressed */
int platform_kbhit() { 
	return getchar();
} 

/* nothing, for now... */
void platform_pause(int s50) {
    usleep(20000*s50);
 }