## Kadane's Algorithm

Scan a given array from left to right, in the ith step compute sum of the subarray ending at i; this sum is maintained in current sum, and keeps track of max global sum then max of current sum and max global sum is return as max global sum.

## Example

Maximum subarray problem: 

```c++
int maxSubArray(vector<int> &nums) {
	int max_sum = INT_MIN
	int cur_sum = 0;
	for (int num : nums) {
		cur_sum = max(0, cur_sum + num);
		max_sum = max(cur_sum, max_sum);
	}
	return max_sum;
}
```
