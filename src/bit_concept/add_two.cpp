#include <bits/stdc++.h>

using namespace std;

int addTwo(int a, int b) {
	while(b) {
		int diff = a ^ b, carry = (unsigned)(a & b) << 1;
		a = diff;
		b = carry;
	}
	return a;
}

int main() {
	cout << addTwo(13, 12) << endl; // this should output 25
}
