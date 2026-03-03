class Solution {
public:
    bool isPalindrome(int x) {


        int a = x;

        long long revNum = 0;

        while(a > 0) {
            int ld = a % 10;

           revNum = ( revNum * 10 )  + ld;

            a  = a /  10;

           
        }

        if( revNum == x) {
            return true;
        }
        return false;
    }
};