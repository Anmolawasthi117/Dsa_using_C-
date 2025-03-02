#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>

using namespace std;

int mincost(vector<int>& nums) {
    map<string, int> memo;
    function<int(vector<int>&)> solve = [&](vector<int>& nums) {
        string key = "";
        for (int num : nums) {
            key += to_string(num) + "_";
        }

        if (memo.count(key)) {
            return memo[key];
        }

        int n = nums.size();
        if (n == 0) {
            return 0;
        }

        if (n <= 2) {
            int max_val = 0;
            for (int num : nums) {
                max_val = max(max_val, num);
            }
            memo[key] = max_val;
            return max_val;
        }

        int min_cost = INT_MAX;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    int max_removed = max({nums[i], nums[j], nums[k]});
                    vector<int> next_nums;
                    for (int l = 0; l < n; ++l) {
                        if (l != i && l != j && l != k) {
                            next_nums.push_back(nums[l]);
                        }
                    }
                    min_cost = min(min_cost, max_removed + solve(next_nums));
                }
            }
        }

        memo[key] = min_cost;
        return min_cost;
    }
}

int main() {
    vector<int> nums1 = {6, 2, 8, 4};
    cout << "Min cost for {6, 2, 8, 4}: " << mincost(nums1) << endl; // Expected: 12

    vector<int> nums2 = {9, 1, 5};
    cout << "Min cost for {9, 1, 5}: " << mincost(nums2) << endl;   // Expected: 9

    vector<int> nums3 = {1, 2, 3, 4, 5, 6};
    cout << "Min cost for {1, 2, 3, 4, 5, 6}: " << mincost(nums3) << endl; // Example
    return 0;
}