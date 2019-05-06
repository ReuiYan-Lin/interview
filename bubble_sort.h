#pragma once
#include <stdio.h>
#include <stdlib.h>
void swap(double *a, double *b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
}

void sort() {
	double array[3] = { 0 };
	double realNumber;
	printf("array[0] is %lf\n", array[0]);
	printf("array[1] is %lf\n", array[1]);
	printf("array[2] is %lf\n", array[2]);

	array[0] = 10;
	array[1] = 5;
	array[2] = 15;
	printf("array[0] is %lf\n", array[0]);
	printf("array[1] is %lf\n", array[1]);
	printf("array[2] is %lf\n", array[2]);

	swap(array, array + 2);

	printf("after swapping...\n");
	printf("array[0] is %lf\n", array[0]);
	printf("array[1] is %lf\n", array[1]);
	printf("array[2] is %lf\n", array[2]);
}