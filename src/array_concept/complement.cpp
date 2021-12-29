#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &nums, int tar) {
	unordered_map<int, int> m;
	for (int i = 0; i < nums.size(); i++) {
		int complement = tar - nums[i];
		if (m.find(complement) == m.end()) {
			m[nums[i]] = i;
		} else {
			return {m[nums[i]], i};
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
	vector<int> arr = {1, 2, 1, 4, 5, 6, 9};
	int tar = 9;
	vecOut(twoSum(arr, tar));
}

