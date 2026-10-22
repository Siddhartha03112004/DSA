class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();

        // Step 1: Sort intervals by starting time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        // Step 2: Traverse intervals
        for (int i = 0; i < n; i++) {
            // If no overlap with the last added interval, push it
            if (ans.empty() || intervals[i][0] > ans.back()[1]) {
                ans.push_back(intervals[i]);
            }
            // If overlap, merge with the last interval
            else {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
};