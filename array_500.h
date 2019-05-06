#pragma once
#include <iostream>
using namespace std;

class Array_500 {
private:

public:
	Array_500(int* num) {
		int idx = 0;
		for (int i = 1; i <= 500; i++) {
			if (num[idx] == i) {
				idx++;
			}
			else {
				printf("%d ",i);
			}
		}
	}

	Array_500(int* num,int b) {
		int idx = 0;
		for (int i = b * 100; i < (b + 1) * 100; i++) {
			if (i != num[idx]) {
				printf("%d ", i);
			}
			else {
				idx++;
			}
		}
	}
};