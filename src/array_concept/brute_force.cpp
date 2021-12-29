#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &nums, int tar) {
	for (int i = 0; i < nums.size() - 1; i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[i] + nums[j] == tar) {
				return {i, j};
			}
		}
	}
	return {-1, -1};
}

void vecOut(vector<int> arr) {
	cout << "[ ";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}

int main() {
	vector<int> arr = {1, 2, 3, 1, 4, 5};
	int tar = 3;
	// expected is {0, 1};
	vecOut(twoSum(arr, tar));
}
