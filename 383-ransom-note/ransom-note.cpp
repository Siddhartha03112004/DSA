class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n  = ransomNote.size();
        int m  = magazine.size();

        unordered_map<char, int> mpr;
        unordered_map<char, int> mpm;

        for(char ch : ransomNote) {
            mpr[ch]++;
        }
        for(char ch : magazine) {
            mpm[ch]++;
        }

       for (auto it : mpr) {
            char ch = it.first;
            int freq = it.second;

            if(mpm[ch] < freq) {
                return false;
            }
       }
       return true;
       
    }
};