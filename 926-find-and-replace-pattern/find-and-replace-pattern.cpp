class Solution {
public:
    
    static bool isMap(string word, string pattern) {
        int n  = word.size();
    if(word.size() != pattern.size()) {
        return false;
    }
        unordered_map<char, int> wm;
        unordered_map<char,int> pm;

        for(int i =  0 ; i <  n ; i++) {
            if(wm.find(word[i]) == wm.end()) {
                wm[word[i]] = i;
            }
              if(pm.find(pattern[i]) == pm.end()) {
                pm[pattern[i]] = i;
            }

            if(wm[word[i]] !=  pm[pattern[i]]) {
                return false;
            }
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        int n = words.size();


        vector<string> ans;
        for(string word : words) {
            if(isMap(word, pattern)) {
                ans.push_back(word);
            }
        }
        return ans;
    }
};