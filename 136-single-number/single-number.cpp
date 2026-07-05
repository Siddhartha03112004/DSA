class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for( auto a : nums) {
            mpp[a]++;
        }
        int ans = 0;
        for(auto it: mpp) {
            if(it.second == 1) {
                 ans = it.first;
            }
        }
        return ans;
    }
};