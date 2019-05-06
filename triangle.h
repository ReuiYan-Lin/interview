#pragma once
#include <stdio.h>
#include <stdlib.h>

void triangle(int n) {
	int space = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= space; j++) {
			printf(" ");
		}
		space++;
		for (int j = 1; j <= 2 * (n - i) + 1; j++) {
			printf("%d", 2 * (n - i) + 1);
		}
		printf("\n");
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j < i) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}

	space = (n + 1) / 2 - 1;
	for (int i = 1; i <= (n + 1) / 2; i++) {
		for (int j = 0; j < space; j++) {
			printf(" ");
		}
		for (int j = 0; j < n - 2 * space; j++) {
			printf("*");
		}
		printf("\n");
		space--;
	}

	space = n - 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= space; j++) {
			printf(" ");
		}
		for (int j = 1; j <= 2*i-1 ; j++) {
			printf("*");
		}
		space--;
		printf("\n");
	}

}