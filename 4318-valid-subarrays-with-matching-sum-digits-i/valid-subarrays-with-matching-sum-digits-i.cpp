class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int n =nums.size();
        int count = 0;
        for(int i = 0 ; i < n  ; i++) {
            long long sum =  0;

            for(int j =  i ; j < n ; j ++) {
                sum = sum + nums[j];

                int right = sum % 10;

                long long left = sum;
                while(left >= 10) {
                    left = left / 10;
                }

                if(left == x && right == x) {
                    count++;
                }
            }
        }
        return count;   
    }
};