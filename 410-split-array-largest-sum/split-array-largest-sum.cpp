class Solution {
public:

    int cancheck(vector<int> &nums, int limit) {

        int subarrays = 1;
        int currSum = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(currSum + nums[i] <= limit) {
                currSum += nums[i];
            }
            else {
                subarrays++;
                currSum = nums[i];
            }

        }

        return subarrays;
    }

    int splitArray(vector<int>& nums, int k) {

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(cancheck(nums, mid) <= k) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }

        }

        return low;
    }
};