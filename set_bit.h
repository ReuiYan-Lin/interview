#pragma once

#include <stdio.h>
#include <stdlib.h>

void set_bit(unsigned int* arr, int len) {
	int n = 3;
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	*arr |= (1UL << n);
}