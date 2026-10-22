class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int maxDiff = INT_MIN;
        for(int  i = 0 ; i  < n ; i++) {
            int curr = i % n;
            int next = (curr + 1) % n;

            int diff = abs(nums[curr] - nums[next]);

            maxDiff = max(maxDiff, diff);

        }
        return maxDiff;
    }
};