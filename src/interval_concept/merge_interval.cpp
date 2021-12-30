#include <bits/stdc++.h>
#include <gtest/gtest.h>

using namespace std;

vector<vector<int>> mergeInterval(vector<vector<int>> &interval) {
	vector<vector<int>> merge;
	sort(interval.begin(), interval.end());
	for (vector<int> v : interval) {
		if (merge.empty() || merge.back()[1] < v[0]) {
			merge.push_back(v);
		} else {
			merge.back()[1] = max(merge.back()[1], v[1]);
		}
	}
	return merge;
}

TEST(IntervalTest, TestCase1) {
	vector<vector<int>> input = {{1,3},{2,6},{8,10},{15,18}};
	vector<vector<int>> solut = {{1,6},{8,10},{15,18}};
	ASSERT_EQ(solut, mergeInterval(input));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
