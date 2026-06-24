class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(auto num : nums) {  
            mpp[num]++;
        }

        for(auto num : nums) {
            int count = 0;

            for(auto it : mpp) {
                int x =  it.first;
                int y = it.second;
                if(  x < num) {
                    count = count + y;
                }
                
            }
            ans.push_back(count);
        }
        return ans;
    }
};