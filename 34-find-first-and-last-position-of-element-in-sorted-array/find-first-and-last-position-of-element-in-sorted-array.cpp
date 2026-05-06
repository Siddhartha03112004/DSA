class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();

        bool found = false;

        int first = -1;
        int second = -1;

        for(int i = 0; i < n; i++) {

            if(nums[i] == target && found == false) {

                first = i;
                second = i;
                found = true;
            }

            else if(nums[i] == target && found == true) {

                second = i;
            }
        }

        return {first, second};
    }
};