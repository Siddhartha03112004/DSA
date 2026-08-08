class Solution {
private:
    void func(int ind, vector<int>& curr, vector<vector<int>>& ans,
              int sum, vector<int>& candidates) {

        if (sum == 0) {
            ans.push_back(curr);
            return;
        }

        for (int i = ind; i < candidates.size(); i++) {

            // Skip duplicates at the same recursion level
            if (i > ind && candidates[i] == candidates[i - 1])
                continue;

            // Since candidates is sorted
            if (candidates[i] > sum)
                break;

            // Take
            curr.push_back(candidates[i]);

            // i + 1 because each element can be used only once
            func(i + 1, curr, ans, sum - candidates[i], candidates);

            // Backtrack
            curr.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> curr;

        func(0, curr, ans, target, candidates);

        return ans;
    }
};