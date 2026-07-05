class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xr = 0;
        for(auto a : nums) {
            xr = xr ^ a;
        }
        return xr;
    }
};