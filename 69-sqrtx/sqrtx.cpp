class Solution {
public:
    int mySqrt(int x) {
        if(x  <= 1) return x;
        int ans = 0;
        for(int i = 2 ;  i <= x; i++) {
              long long a = 1LL * i * i;
             if( a == x) {
                ans = i;
                break;
              }
            else if(a > x) {
                ans = i-1;
                break;
            }
        }
        return ans;
    }    
};