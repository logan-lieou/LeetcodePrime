## Brute Force

This is when you take an array and check all possible combonations in order to find a solution, this method is commonly refered to as brute force and usually takes O(n^x) time where x can be any power.

## Example of Brute Force

We see brute force used in the two sum problem, when you check all possible combitions of numbers in the array to and add them together to check the target.

```c++
vector<int> twoSum(vector<int> &nums, int tar) {
	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if ((nums[i] + nums[j]) == tar) {
				return {i, j};
			}
		}
	}
	return {-1, -1};
}
```

