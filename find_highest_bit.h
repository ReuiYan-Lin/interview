#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class Find_Bighest_Bit {
public:
	Find_Bighest_Bit(int s) {
		
		s |= (s >> 1);
		s |= (s >> 2);
		s |= (s >> 4);
		s |= (s >> 8);
		s |= (s >> 16);
		s = s - (s >> 1);
		printf("%d", s);
		printf("%d", int(log2(16))+1);
		
		/*
		while (s & (s - 1)) {
			s &= s - 1;
		}
		printf("%d", s);
		*/
	}
};