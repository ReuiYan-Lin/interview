#pragma once
#include <stdio.h>
typedef union {
	unsigned long l;
	unsigned char c[4];
}EnidanTest;

void Endian() {
	EnidanTest et;
	et.l = 0x12345678;
	printf("%d \n", sizeof(long));
	printf("%d \n", sizeof(int));
	printf("%d \n", sizeof(float));
	printf("%d \n", sizeof(double));
	printf("%d \n", sizeof( int));
	for (int i = 0; i < 4; i++) {
		printf("%p : 0x%02X\n", &et.c[i], et.c[i]);
	}
}
void Endian_reverse() {
	uint32_t n = 0x12345678;
	n = ((n & 0xffff0000) >> 16) | ((n & 0x0000ffff) << 16);
	printf("0x%x\n", n); // =>     0x56781234
	n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);
	printf("0x%x\n", n); // =>  0x78563412
	n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);
	printf("0x%x\n", n); // => 0x87654321
	n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);
	printf("0x%x\n", n); // => 0x2d951c84
	n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);
	printf("0x%x\n", n); // => 0x1e6a2c48
}

void Endian_reverse_2() {
	uint32_t n = 0x12345678;
	uint32_t t=0;
	for (int i = 0; i < 32; i++) {
		if (n & (1) << i) {
			t |= 1 << ((32 - 1) - i);
		}
	}
	printf("0x%x\n", n);
	printf("0x%x\n", t);
}