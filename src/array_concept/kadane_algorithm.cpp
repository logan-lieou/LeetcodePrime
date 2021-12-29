#include <bits/stdc++.h>

using namespace std;

int maxSubarray(vector<int> &nums) {
	int max_sum = INT_MIN;
	int cur_sum = 0;
	for (int num : nums) {
		cur_sum = max(0, cur_sum + num);
		max_sum = max(max_sum, cur_sum);
	}
	return max_sum;
}

int main() {
	vector<int> arr = {1, 2, 3, 4, 5, 1, 1, 2, 9};
	cout << maxSubarray(arr) << endl;
}
