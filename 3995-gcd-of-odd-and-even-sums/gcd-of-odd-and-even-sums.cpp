class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd = 0;
        int even = 0;
        int first = 0;
        int sec = 1;

        for(int i =  0 ;  i  < n ; i++) {
            odd = odd + first;
            even  = even  + sec;
            first = first + 2;
            sec = sec + 2;
        }
        return gcd(odd, even);     
    }
};