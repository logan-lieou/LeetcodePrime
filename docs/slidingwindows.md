## Sliding Window

This concept is where we imagine a window that is sliding across the array, lol, we are trying to tell something this array, there's a better metaphor here something about trains windows and overlap or something idk either way just like split the array up or some scuffed ass shit

## Example

Example max sum of k sized sub array with this we slide across a window of size k and calculate max sum:

```c++
int sumOfKElemets(vector<int> &nums, int k) {
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
```
