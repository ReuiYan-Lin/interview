#pragma once
#include <stdio.h>
#include <stdlib.h>


void nine_bit() {
	int a = 0xfafc;
	int r = a & (1 << 8);
	int x = a >> 8 &1;
	printf("%x", a);
	printf("%x", r);
	printf("%x", x);
}