class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n  = s.size();

        int i = 0;
        int j = 0;
        int ans = 0;
        unordered_map<char, int>mpp;

        while( j < n) {
            if(mpp.find(s[j]) != mpp.end() && mpp[s[j]] > 0) {
                mpp[s[i]]--;
                i++;
            } else {
                mpp[s[j]]++;
                j++;

                ans = max(ans , j - i);
            }
        }
        return ans;
    }
};