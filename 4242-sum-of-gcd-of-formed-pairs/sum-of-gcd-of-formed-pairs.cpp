class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();

        vector<long long> prefix(n);

        int mx = nums[0];
        prefix[0] = nums[0];

        for (int i = 1; i < n; i++) {
            mx = max(mx, nums[i]);
            prefix[i] = gcd(mx, nums[i]);
        }

        sort(prefix.begin(), prefix.end());

        long long sum = 0;
        int i = 0, j = n - 1;

        while (i < j) {
            sum += gcd(prefix[i], prefix[j]);
            i++;
            j--;
        }

        return sum;
    }
};