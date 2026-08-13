class Solution {
public:
    int minAddToMakeValid(string s) {
        int level = 0;
        int ans = 0;

        for (char ch : s) {
            if (ch == '(') {
                level++;
            } 
            else {
                if (level > 0) {
                    level--;
                } 
                else {
                    ans++;   // unmatched ')'
                }
            }
        }

        ans += level;  // unmatched '('

        return ans;
    }
};