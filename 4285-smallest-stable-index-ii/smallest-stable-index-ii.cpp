class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        // suffixMin[i] = minimum element from index i to n-1
        vector<int> suffixMin(n);

        // For the last index, suffix contains only nums[n-1]
        suffixMin[n - 1] = nums[n - 1];

        // Build suffix minimum from right to left
        for(int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(nums[i], suffixMin[i + 1]);
        }

        // maxi = maximum element from index 0 to i
        int maxi = INT_MIN;

        // Check every index from left to right
        for(int i = 0; i < n; i++) {

            // Update maximum of nums[0...i]
            maxi = max(maxi, nums[i]);

            // Instability score:
            // max(nums[0...i]) - min(nums[i...n-1])
            if(maxi - suffixMin[i] <= k) {
                return i;   // first stable index
            }
        }

        // No stable index found
        return -1;
    }
};