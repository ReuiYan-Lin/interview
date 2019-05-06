#pragma once
#include <stdlib.h>
#include <stdio.h>

int strcmp(const char* a, const char* b) {
	while (*a != '\0' || *b != '\0') {
		if (*a == '\0' || *b == '\0')
			return *a - *b;
		else if (*a - *b != 0)
			return *a - *b;
		else {
			a++;
			b++;
		}
	}
	return 0;
}