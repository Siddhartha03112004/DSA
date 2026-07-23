class Solution {

private:
    bool checkPal(const string &ans){
        int i = 0;
        int j = ans.size()-1;

        while(i < j){ 
            if(ans[i] != ans[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

public:

    string longestPalindrome(string s) {

        string longest="";
        int n=s.size();

        for(int i = 0;i < n; i++){
            string ans="";
            for(int j = i ; j < n; j++){
                ans += s[j];

                if(checkPal(ans)){
                    if(ans.size()>longest.size()){
                     longest=ans;
                    }
                }
            }
        }
        return longest;
    }
};