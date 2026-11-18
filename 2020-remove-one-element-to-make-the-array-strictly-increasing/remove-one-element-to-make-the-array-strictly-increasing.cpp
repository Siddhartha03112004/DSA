class Solution {

    bool check(vector<int>& nums, int curr) {

        int n = nums.size();
        int prev = -1;

        for(int i = 0; i < n; i++) {

            // Skip the element we want to remove
            if(i == curr) {
                continue;
            }

            // Compare with the previous accepted element
            if(prev != -1 && nums[prev] >= nums[i]) {
                return false;
            }

            // Update previous accepted index
            prev = i;
        }

        return true;
    }

public:
    bool canBeIncreasing(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            if(check(nums, i)) {
                return true;
            }
        }

        return false;
    }
};