class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;

        int oddCount = 0;
        int ans = 0;

        for (int x : nums) {
            if (x % 2)
                oddCount++;

            int need = oddCount - k;

            if (mpp.find(need) != mpp.end())
                ans += mpp[need];

            mpp[oddCount]++;
        }

        return ans;
    }
};