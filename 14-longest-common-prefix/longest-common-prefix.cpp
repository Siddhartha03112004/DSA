class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string ans = "";
        string s = strs[0];

        for (int i = 0; i < s.size(); i++) {

            for (int j = 1; j < strs.size(); j++) {

                // Current word is too short
                if (i >= strs[j].size()) {
                    return ans;
                }

                // Mismatch found
                if (s[i] != strs[j][i]) {
                    return ans;
                }
            }

            // All strings matched at position i
            ans += s[i];
        }

        return ans;
    }
};