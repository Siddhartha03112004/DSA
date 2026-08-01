class Solution {
public:
    string smallestPalindrome(string s) {
        int freq[26] = {0};
        string left = "";
        string mid = "";
        for(char ch  : s) {
            freq[ch - 'a']++;
        }
        for(int i  = 0 ; i< 26 ; i++) {
            for(int  j = 0 ; j < freq[i] / 2; j++) {
                left += char(i  + 'a');
            }
            if(freq[i] % 2) {
               mid += char(i+'a');
            }     
        }
              string right = left;

            reverse (right.begin(), right.end());
        
       return left + mid + right;
    }
};