#pragma once
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void Unsigned() {
	unsigned int a=0,b ;
	for (b = 2; b >= 0; b--) {
		a++;
		printf("%d ", b);
	}
	printf("%d", a);
}