class Solution {
private:
    bool check(int left , int right , string& x) {
        if(left >= right) {
            return true;
        }
        if(x[left] != x[right]) {
            return false;
        }
         return check (left+1, right -1 , x);
    }

public:
    bool isPalindrome(int x) {
            if (x < 0)
            return false;

            string s = to_string(x);
            int left = 0;
            int right = s.size() -1;
            return check(left, right, s);    
    }
};