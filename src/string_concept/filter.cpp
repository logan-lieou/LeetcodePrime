#include <bits/stdc++.h>

using namespace std;

int main() {
	string old_string = "hello, woRld!";
	string new_string = "";
	for (char c : old_string) {
		if (isalnum(c)) {
			new_string += tolower(c);
		}
	}
	cout << new_string << endl;
}
