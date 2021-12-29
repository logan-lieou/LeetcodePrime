#include <bits/stdc++.h>

using namespace std;

int maxSumK(vector<int> &nums, int k) {
	int max_sum = INT_MIN;
	for (int i = 0; i < nums.size() - k + 1; i++) {
		int cur_sum = 0;
		for (int j = 0; j < k; j++) {
			cur_sum += nums[i + j];
			max_sum = max(cur_sum, max_sum);
		}
	}
	return max_sum;
}

int main() {
	vector<int> arr = {1, 2, 3, 4, 5, 1, 6, 2, 9};
	cout << maxSumK(arr, 3) << endl;
}
