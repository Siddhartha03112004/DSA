class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long  rsum = 0;
        long long lsum = 0;

        for(auto i : nums) rsum += i;

        int ans = 0;

        for(int i = 0;i<nums.size()-1;i++){
            lsum += nums[i];
            rsum -= nums[i];

            if(lsum>=rsum) ans++;
        }

        return ans;
    }
};