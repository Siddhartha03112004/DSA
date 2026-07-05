class Solution {
public:
    int climbStairs(int n) {
        if( n <= 1) return n;
        int last =1;
        int slast = 1;
        int curr = 0;

        for(int i = 2 ; i<=n; i++) {
            curr = last + slast;
            slast = last;
            last = curr;
        }
        return curr;
    }
};