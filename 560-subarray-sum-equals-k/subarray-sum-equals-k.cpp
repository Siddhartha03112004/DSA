class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;  // restart karo sum for each i
            for (int j = i; j < n; j++) {
                sum = sum +  nums[j];   // add elements one by one
                if (sum == k) {
                    count++;
                }
            }
        }

        return count;
    }
};
