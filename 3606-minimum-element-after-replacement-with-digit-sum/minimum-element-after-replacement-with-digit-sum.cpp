class Solution {
public:
    int minElement(vector<int>& nums) {
        int n  = nums.size();
        vector<int> ans(n);
        for(int i = 0 ; i  < n; i++) {
            int curr  = nums[i];
            int sum  = 0;
            while( curr > 0) {
                int lastDig = curr % 10;
             sum = sum + lastDig;
                curr = curr / 10; 
            }
            ans[i] = sum;
        }
        int mini = INT_MAX;
        for(int i = 0 ; i  < ans.size(); i++) {
            mini = min(mini, ans[i]);
        }
        return mini;
    }
};