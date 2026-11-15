class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini = INT_MAX;

        if(nums.empty()) {
            return -1;
        }

        for(int i = 0 ;  i < nums.size();i++) {
            int sum = 0;
            for(int j = i ; j < nums.size(); j++) {
                sum  += nums[j];
                int length = j - i + 1;

                if(length >= l && length <= r) {
                    if(sum > 0) {
                         mini = min(sum , mini);
                    }
                   
                }

            }
        }
        if(mini == INT_MAX) {
            return -1;
        } else {
            return mini;
        }
    }
};