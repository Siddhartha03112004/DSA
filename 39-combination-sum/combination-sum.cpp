class Solution {
private:
    void func(int ind, vector<int> &curr, vector<vector<int>> &ans,
              int target, vector<int> &nums) {

        // Found a valid combination
        if (target == 0) {
            ans.push_back(curr);
            return;
        }
        if(target < 0) {
            return;
        }

        // No more candidates
        if (ind == nums.size())
            return;

        // Take the current element (can reuse it)
        
            curr.push_back(nums[ind]);
            func(ind, curr, ans, target - nums[ind], nums);
            curr.pop_back();
      

        // Skip the current element
        func(ind + 1, curr, ans, target, nums);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;

        func(0, curr, ans, target, candidates);

        return ans;
    }
};