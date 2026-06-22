class Solution {
public:
    int rearrangeCharacters(string s, string target) {

        unordered_map<char , int> smpp;
        unordered_map<char , int> tmpp;
        int count  =  0;
        for(int i  =  0 ;i < s.size(); i++ ) {
            smpp[s[i]]++;
        }
        for(int i  = 0 ; i < target.size(); i++) {
            tmpp[target[i]]++;
        }
        int ans = INT_MAX;

        for(auto it : tmpp) {
            char ch = it.first;
            int need = it.second;

            ans = min(ans, smpp[ch] / need);
        }


    return ans;
        
    }
};