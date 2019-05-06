#pragma once
#include <stdio.h>
#include <stdlib.h>
int partition(int* arr, int left, int right);
void quick(int* arr, int left, int right);
#define swap(a,b){int t;t=a;a=b;b=t;}
/*
void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}
*/

void quick_sort(int* arr, int len) {
	printf("%d \n", len);
	quick(arr, 0, len - 1);
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}

void quick(int* arr, int left, int right) {
	if (left < right) {
		int pivot = partition(arr, left, right);
		quick(arr,left, pivot - 1);
		quick(arr, pivot + 1, right);
	}
}
int partition(int* arr, int left, int right) {
	int pivot = arr[right];
	int i = left - 1;
	for (int j = left; j < right; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	i++;
	swap(arr[i], arr[right]);
	return i;
}