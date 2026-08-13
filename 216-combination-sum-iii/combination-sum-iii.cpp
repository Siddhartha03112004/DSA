class Solution {
private:
    void func(int ind, vector<int>& curr,
              vector<vector<int>>& ans, int sum, int k) {

        if(k == 0) {
            if(sum == 0)
                ans.push_back(curr);
            return;
        }

        if(sum < 0) return;

        for(int i = ind; i <= 9; i++) {

            curr.push_back(i);

            func(i + 1, curr, ans, sum - i, k - 1);

            curr.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<vector<int>> ans;
        vector<int> curr;

        func(1, curr, ans, n, k);

        return ans;
    }
};