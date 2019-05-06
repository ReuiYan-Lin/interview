#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <map>
void random() {
	srand((unsigned)time(NULL));
	int arr[500] = {0};
	int cnt=0;
	while (cnt < 500) {
		int tmp = rand() % 500;
		if (!arr[tmp]) {
			printf("%d ", tmp + 1);
			cnt++;
		}
	}
}
void random_vector() {
	srand((unsigned)time(NULL));
	map<int, vector<int>> m;
	int cnt = 0;
	while (cnt < 500) {
		int tmp = rand() % 500;
		int idx = tmp % 10;
		
		vector<int> v = m[idx];
		bool flag = 0;
		for (int i = 0; i < v.size(); i++) {
			if (tmp == v[i]) {
				flag = 1;
				break;
			}
		}
		if (!flag) {
			printf("%d ", tmp);
			v.push_back(tmp);
			cnt++;
		}
		m[idx] = v;
	}
}