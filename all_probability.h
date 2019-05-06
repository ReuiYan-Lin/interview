#pragma once
#include <iostream>
using namespace std;
class All_probability {
private:
	int a = 0;
	int b = 0;
	int c = 0;
	int s = 0;
public:
	All_probability(int s) {
		this->s = s;
	}
	void print() {
		for (int a = 0; a <= s; a++) {
			for (int b = 0; b <= s - a; b++) {
				c = s - a - b;
				cout << s << " = " << a << " + " << b << " + " << c << endl;
				
			}
		}
	}
};