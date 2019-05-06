#pragma once
#include <iostream>
#include <vector>

#define MAX 100
#define SWAP_d(a,b) {int t;t=a;a=b;b=t;}
inline void SWAP(int &a,int &b) {
	int t;
	t = a;
	a = b;
	b = t;
}

//#define SWAP(a,b) {int t;t=a;a=b;b=t;}

void SWAP_s(int* a, int*b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;

}

using namespace std;
class Sort {
private:
	int *arr;
	size_t length;
	int max = 1000;
public:
	Sort(int ar[],size_t len):arr(ar),length(len) {

	}
	void bubble_sort() {
		for (int i = 0; i < length - 1; i++) {
			for (int j = 0; j < length - 1 - i; j++) {
				if (arr[j] > arr[j + 1]) {
					SWAP_d(arr[j], arr[j + 1]);
				}
			}
		}
		print();
	}

	void selection_sort() {
		for (int i = 0; i < length; i++) {
			int min = INT_MAX;
			int tmp = 0;
			for (int j = i; j < length; j++) {
				if (arr[j] < min) {
					min = arr[j];
					tmp = j;
				}
			}
			SWAP_d(arr[i], arr[tmp]);
		}
		print();
	}

	void insert_sort() {
		int key, j;
		for (int i = 1; i < length; i++) {
			key = arr[i];
			for ( j = i; j > 0 && arr[j - 1] > key; j--) {
				arr[j] = arr[j - 1];
			}
			arr[j] = key;
		}
		print();
	}

	void merge_sort() {
		MergeSort(0,length-1);
		print();
	}
	void MergeSort(int left,int right) {
		if (left < right) {
			int mid = (left + right - 1) / 2;
			MergeSort(left, mid);
			MergeSort(mid+1, right);
			Merge(left, mid, right);
		}
	}

	void Merge(int left, int mid, int right) {
		int len_left = mid - left + 1;
		int len_right = right - mid;
		int L[MAX];
		int R[MAX];
		for (int i = 0; i < len_left; i++) {
			L[i] = arr[left+i];
		}
		for (int i = 0; i < len_right; i++) {
			R[i] = arr[mid+i+1];
		}

		int idx_left = 0;
		int idx_right = 0;
		int idx_arr = left;
		while (idx_left < len_left && idx_right < len_right) {
			if (L[idx_left] <= R[idx_right]) {
				arr[idx_arr] = L[idx_left];
				idx_arr++;
				idx_left++;
			}
			else {
				arr[idx_arr] = R[idx_right];
				idx_arr++;
				idx_right++;
			}
		}
		while(idx_left < len_left) {
			arr[idx_arr] = L[idx_left];
			idx_arr++;
			idx_left++;
		}
		while (idx_right < len_right) {
			arr[idx_arr] = R[idx_right];
			idx_arr++;
			idx_right++;
		}
	}

	void quick_sort() {
		QuickSort(0, length - 1);
		print();
	}
	void QuickSort(int left, int right) {
		if (left < right) {
			int pivot = partition(left, right);
			QuickSort(left, pivot - 1);
			QuickSort(pivot + 1, right);
		}
	}
	int partition(int left, int right) {
		int pivot = arr[right];
		int i = left - 1;
		for (int j = left; j < right; j++) {
			if (arr[j] < pivot) {
				i++;
				SWAP_d(arr[j], arr[i]);
			}
		}
		i++;
		SWAP_d(arr[i], arr[right]);
	}
	void print() {
		for (int i = 0; i < length; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
};