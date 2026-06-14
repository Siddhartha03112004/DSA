class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {

        long long cnt = 0;
        int xr = 0;

        unordered_map<int,long long> mpp;
        mpp[0] = 1;

        for(int i = 0; i < nums.size(); i++) {

            xr ^= nums[i];

           int x = xr ^ 0;  
           cnt += mpp[x];

            mpp[xr]++;
        }

        return cnt;
    }
};