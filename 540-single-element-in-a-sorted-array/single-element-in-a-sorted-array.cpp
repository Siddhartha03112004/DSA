class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (int num : nums) {
            mpp[num]++;
        }
        for (auto &x : mpp) {
            if (x.second == 1) {
                return x.first; // return the element that appears once
            }
        }
        return -1; // should never reach here
    }
};
