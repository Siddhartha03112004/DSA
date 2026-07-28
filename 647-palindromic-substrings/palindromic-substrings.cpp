class Solution {

bool check(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
}
public:
    int countSubstrings(string s) {
        int count = 0;
        for(int i  = 0 ; i< s.size() ; i++ ) {
            string ans = "";
            for(int j = i ; j < s.size(); j++) {
                ans  = ans + s[j];
                bool apple = check(ans);
                if(apple) {
                    count++;
                }
            }

           
        }
         return count;
    }
};