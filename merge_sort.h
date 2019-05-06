#pragma once
#include <stdio.h>
#include <stdlib.h>


void merge(int* arr, int left, int mid, int right) {
	int len_l = mid - left + 1;
	int len_r = right - mid;
	int* L = (int*)calloc(len_l,sizeof(int));
	int* R = (int*)calloc(len_r, sizeof(int));

	for (int i = 0; i < len_l; i++) {
		L[i] = arr[left + i];
	}
	for (int i = 0; i < len_r; i++) {
		R[i] = arr[mid+1+ i];
	}
	int idx_l = 0;
	int idx_r = 0;
	int idx_a = left;
	while (idx_l < len_l && idx_r < len_r) {
		if (L[idx_l] <= R[idx_r]) {
			arr[idx_a] = L[idx_l];
			idx_a++;
			idx_l++;
		}
		else {
			arr[idx_a] = R[idx_r];
			idx_a++;
			idx_r++;
		}
	}
	while (idx_l < len_l) {
		arr[idx_a] = L[idx_l];
		idx_a++;
		idx_l++;
	}
	while (idx_r < len_r) {
		arr[idx_a] = R[idx_r];
		idx_a++;
		idx_r++;
	}
	free(L);
	free(R);
}

void merge_sort(int* arr, int left, int right) {
	if (left < right) {
		int mid = (left + (right - 1)) / 2;
		merge_sort(arr, left, mid);
		merge_sort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

void sort(int* arr,int len) {
	merge_sort(arr, 0, len - 1);

}