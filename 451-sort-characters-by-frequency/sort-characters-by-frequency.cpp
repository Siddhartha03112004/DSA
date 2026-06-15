class Solution {
public:

    static bool compare(pair<char,int> a, pair<char,int> b) {
        return a.second > b.second;
    }

    string frequencySort(string s) {

        unordered_map<char,int> mpp;

        // Count frequency
        for(char ch : s) {
            mpp[ch]++;
        }

        // Move map data to vector
        vector<pair<char,int>> v;

        for(auto it : mpp) {
            v.push_back(it);
        }

        // Sort by frequency
        sort(v.begin(), v.end(), compare);

        // Build answer
        string ans = "";

        for(auto p : v) {

            for(int i = 0; i < p.second; i++) {
                ans += p.first;
            }

        }

        return ans;
    }
};