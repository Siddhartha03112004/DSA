class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char, int> mpp;

        for(int i = 0 ; i< s.size(); i++) {
            mpp[s[i]]++;
        }   
        unordered_map<int, vector<char>> groups;

        for ( auto it : mpp) {
            groups[it.second].push_back(it.first);
        }


        int maxSize = 0;
        int maxFreq = 0;
        string ans = "";

        for(auto &it : groups) {
            int freq = it.first;
            int size = it.second.size();

            if(size > maxSize || (size == maxSize && freq > maxFreq)) {
                maxSize = size;
                maxFreq = freq;

                ans = "";
                for(char c : it.second) {
                    ans += c;
                }
            }
        }
   
        return ans;    
    }
};