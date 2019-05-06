#pragma once
#include <iostream>
#include <math.h>
#include <vector>

class Array_Pair {
public:
	Array_Pair(int arr[],int len) {
		int min = INT_MAX;
		vector<pair<int, pair<int, int>>> r;
		int i;
		for (i = 1; i < len; i++) {
			if (abs(arr[i - 1] - arr[i]) <= min) {
				min = abs(arr[i - 1] - arr[i]);
				pair<int, int> tmp;
				Add_Pair(tmp, i, i - 1);
				pair<int, pair<int, int>> p;
				p.first = min;
				p.second = tmp;
				r.push_back(p);
			}
		}	
		for (int i = 0; i < r.size(); i++) {
			if (r[i].first == min) {
				printf("%d, %d, (%d) \n", r[i].second.first, r[i].second.second, min);
			}
		}
	}
	void Add_Pair(pair<int, int> &t, int a, int b) {
		t.first = a;
		t.second = b;
	}
};