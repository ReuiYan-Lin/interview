#pragma once
#include <iostream>

class Fibonacci {
private:
	int F[20] = {0};
public:
	Fibonacci() {
	}
	int recursize(int a) {
		if (a == 0) {
			return 0;
		}
		else if (a == 1) {
			return 1;
		}
		else {
			return recursize(a - 1) + recursize(a - 2);
		}
	}
	int non_recursize(int a) {
		F[0] = 0;
		F[1] = 1;
		for (int i = 2; i <= a; i++) {
			F[i] = F[i - 1] + F[i - 2];
		}
		return F[a];
	}

	int non_recursize2(int a) {
		int* arr;
		
		if ((arr = (int*)malloc((a + 1) * sizeof(int))) == NULL)
			return 0;
		memset(arr, 0,(a+1)*sizeof(int));
		
		//arr = (int*)calloc(a + 1, sizeof(int));
		F[0] = 0;
		F[1] = 1;
		for (int i = 2; i <= a; i++) {
			F[i] = F[i - 1] + F[i - 2];
		}
		int res = F[a];
		free(arr);
		return res;

	}

};