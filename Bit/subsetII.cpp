#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/subsets-ii/

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        int cnt = 1 << n;
        vector<vector<int>> ans;
        for (int mask = 0; mask < cnt; mask++) {
            vector<int> subset;
            for (int i = 0; i < n; i++) {
                if ((mask & (1 << i)) != 0) {
                    subset.push_back(nums[i]);
                }
            }
            ans.push_back(subset);
        }
        // remove duplicates
        set<vector<int>> uniqueSubsets(ans.begin(), ans.end());
        // convert set to vector
        vector<vector<int>> result(uniqueSubsets.begin(), uniqueSubsets.end());
        return result;
    }
};
int main() {
    Solution s;
    vector<int> nums = {1, 2, 2};

    vector<vector<int>> res = s.subsetsWithDup(nums);

    for (auto &subset : res) {
        cout << "{ ";
        for (int x : subset) {
            cout << x << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
