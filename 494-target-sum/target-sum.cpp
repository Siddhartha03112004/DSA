class Solution {
private:
    int func(int ind, int sum, vector<int>& nums) {
        if (ind == nums.size()) {
            return (sum == 0);
        }

        int plus = func(ind + 1, sum - nums[ind], nums);
        int minus = func(ind + 1, sum + nums[ind], nums);

        return plus + minus;
    }

public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return func(0, target, nums);
    }
};