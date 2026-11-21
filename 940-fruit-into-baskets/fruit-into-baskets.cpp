class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int, int> mpp;
        int maxLength = 0;

        int l = 0;
        int r = 0;

        while (r < n) {

            mpp[fruits[r]]++;  // First insert fruit

            while (mpp.size() > 2) {  // Changed if to while

                mpp[fruits[l]]--;     // Decrease frequency

                if (mpp[fruits[l]] == 0) {
                    mpp.erase(fruits[l]);  // Remove fruit type
                }

                l++;
            }

            maxLength = max(maxLength, r - l + 1);

            r++;
        }

        return maxLength;
    }
};