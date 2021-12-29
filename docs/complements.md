## Complements

With this concept, we can use complements in order to find the solution to a problem with less time complexity than brute force checking all combotions, by checking weather the compliment of our current index exists, to satisfiy the problem goal.

## Example

Using the two sum problem we can see this concept being using in order to take the time complexity from O(n^2) or the time complexity of the brute force solution to O(n) which is a major improvement, this is technically a dp technique but is included here in array, the reason that this is dp is because we take the solutions to the past problems that we have solved and store in hash map in order to find solution, the complement is stored at an index, and we don't have to iterate over the array multiple times to find the solution if we can just locate the complement in the map, this is a sort of memoization of the problem so technically dp I think :prayge: that this is right but not sure tbh.

```c++
vector<int> twoSum(vector<int> &nums, int tar) {
	unordered_map<int, int> m;
	for (int i = 0; i < nums.size(); i++) {
		int complement = tar - nums[i];
		if (m.find(complement) == m.end()) {
			m[nums[i]] = i;
		} else {
			return {i, m[nums[i]]};
		}
	}
	return {-1, -1};
}
```
