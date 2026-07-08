class Solution {
public:
    int mySqrt(int x) {
        if(x  <= 1) return x;
        for(int i = 2 ;  i <= x; i++) {
              long long a = 1LL * i * i;
             if( a == x) {
                return i;
              }
            else if(a > x) {
                 return i-1;
                
            }
        }
        return 1;
    }    
};