class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;

        while (j < nums.size()) {
            if (nums[j] == nums[j - 1]) {
                nums.erase(nums.begin() + j);
            } else {
                j++;
            }
        }

        return nums.size();
    }
};