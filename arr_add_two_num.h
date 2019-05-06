#pragma once
int* add_two_num_arr(int* arr, int size, int target) {
	static int res[2] = {};
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] + arr[j] == target) {
				res[0] = i;
				res[1] = j;
				return res;
			}
		}
	}
	return 0;
}