class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int n = nums.size();

        int max = INT_MIN;
        int smax = INT_MIN;
        int tmax = INT_MIN;

        int mini = INT_MAX;
        int smini = INT_MAX;

        long long maxii = 0;
        long long minii = 0;

        for (int i = 0; i < n; i++) {

            if (nums[i] >= max) {
                tmax = smax;
                smax = max;
                max = nums[i];
            }
            else if (nums[i] >= smax) {
                tmax = smax;
                smax = nums[i];
            }
            else if (nums[i] > tmax) {
                tmax = nums[i];
            }

            if (nums[i] <= mini) {
                smini = mini;
                mini = nums[i];
            }
            else if (nums[i] < smini) {
                smini = nums[i];
            }
        }

        maxii = 1LL * max * smax * tmax;
        minii = 1LL * max * mini * smini;

        return (int)std::max(maxii, minii);
    }
};