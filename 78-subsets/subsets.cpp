class Solution {
private:
    void solve(int i, vector<int>& nums, vector<int>& cur, vector<vector<int>>& ans) {
        if (i == nums.size()) {      // no elements left → save what we collected
            ans.push_back(cur);
            return;
        }

        cur.push_back(nums[i]);              // TAKE
        solve(i + 1, nums, cur, ans);
        cur.pop_back();                      // undo before the other branch

        solve(i + 1, nums, cur, ans);        // NOT TAKE
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;
        solve(0, nums, cur, ans);
        return ans;
    }
};