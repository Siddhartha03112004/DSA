class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mpp;

        // Count occurrences
        for (auto a : arr) {
            mpp[a]++;
        }

        set<int> s;

        // Check frequencies
        for (auto it : mpp) {
            int frequency = it.second;

            if (s.find(frequency) != s.end()) {
                return false;
            }

            s.insert(frequency);
        }

        return true;
    }
};
