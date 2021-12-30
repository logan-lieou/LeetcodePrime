## Merge An Interval

We have a set of intervals [start_i, end_i] and we want to merge these intervals such that none overlap
given that the intervals are unsorted.

## Example

The way that we solve this problem is first by sorting the intervals by start_i in ascending order, next we can run a simple algorithm to check weather the intervals are going to overlap, this takes O(nlogn) time.

```c++
vector<vector<int>> new_interval;
sort(arr.begin(), arr.end());
for (vector<int> v : arr) { 
	if (new_interval.empty() || new_interval.back()[1] < v[0]) {
		new_interval.push_back(v);
	} else {
		new_interval.back()[1] = max(new_interval.back()[1], v[1]);
	}
}
```

