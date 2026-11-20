class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int a = k;
        int l = 0;
        int r = 0;
        int maxlen = 0;
        int count = 0;

        while (r < n) {
            if (nums[r] == 1) {
                count++;
            }
            else if (nums[r] == 0 && a > 0) {
                count++;
                a--;
            }
            else {
                if (nums[r] == 0 && a == 0) {

                    while (a == 0) {
                        if (nums[l] == 0) {
                            a++;
                        }
                        l++;
                        count--;
                    }

                    count++;
                    a--;
                }
            }

            r++;
            maxlen = max(maxlen, count);
        }

        return maxlen;
    }
};