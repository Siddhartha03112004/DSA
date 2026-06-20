class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> sMpp;
        unordered_map<char, int> tMpp;

        for (int i = 0; i < s.size(); i++) {
            sMpp[s[i]]++;
            tMpp[t[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (sMpp[s[i]] != tMpp[s[i]]) {
                return false;
            }
        }

        return true;
    }
};