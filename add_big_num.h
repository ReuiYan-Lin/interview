#pragma once
#include <stdio.h>
#include <stdlib.h>

int char2int(char n) {
	return n - 48;
}
void char_rev(char* n) {
	char* l;
	char* r;
	for (l = n, r = n + strlen(n)-1; l < r; l++, r--) {
		*l ^= *r;
		*r ^= *l;
		*l ^= *r;
	}
}
void Add_big_number(char* n1,int len_n1,char* n2,int len_n2,char* rs,int* len_rs){
	if (!n1)
		rs = n2;
	else if (!n2)
		rs = n1;
	else {
		char* tmp;
		int len_t;
		if (len_n1 < len_n2) {
			tmp = n1;
			n1 = n2;
			n2 = tmp;

			len_t = len_n1;
			len_n1 = len_n2;
			len_n2 = len_t;
		}
		int sum = 0;
		int flag = 0;
		for (int i = 0; i < len_n1; i++) {
			if (i > len_n2) {
				sum = char2int(*n1) + flag;
				n1++;
			}
			else {
				sum = char2int(*n1) + char2int(*n2) + flag;
				n1++;
				n2++;
			}
			flag = sum / 10;
			rs[i] = sum % 10 + 48;
		}
		if (flag > 0) {
			*len_rs = len_n1 + 1;
			rs[len_n1] = flag + 48;
		}
		*len_rs = len_n1;
	}
}
