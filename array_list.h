#pragma once
#include <iostream>
using namespace std;
#define null 0xffff
/* array »Ý¶ñº¡*/
struct node {
	unsigned int Data_H = 0;
	unsigned int Data_L = 0;
	unsigned int next = null;
};

class Array_List {
private:
	node n[20];
public:
	Array_List() {
		n[0].Data_H = 1;
		n[0].Data_L = 2;
		n[0].next = 19;

		n[1].Data_H = 5;
		n[1].Data_L = 6;
		n[1].next = 2;

		n[2].Data_H = 9;
		n[2].Data_L = 10;
		n[2].next = null;

		n[19].Data_H = 3;
		n[19].Data_H = 4;
		n[19].next = 1;
	};
	void check(int Data_A, int Data_B) {
		int idx = 0;
		int pre_idx = 0;
		if (n[idx].Data_H <<4 + n[idx].Data_L  == Data_A <<4 + Data_B) {
			printf("idx : %d ,pre_idx : null", idx);
			return;
		}
		pre_idx = idx;
		idx = n[idx].next;
		while (n[pre_idx].next != null) {
			if (n[idx].Data_H << 4 + n[idx].Data_L == Data_A << 4 + Data_B) {
				printf("idx : %d ,pre_idx : %d\n", idx,pre_idx);
				return;
			}
			else if (n[idx].Data_H << 4 + n[idx].Data_L > Data_A << 4 + Data_B) {
				printf("Not found\n");
			}
			pre_idx = idx;
			idx = n[idx].next;
		}
	}
};