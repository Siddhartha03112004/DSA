class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int ones = -1;
        int index = -1;

      

        for (int i = 0; i < n; i++) {
              sort(mat[i].begin(), mat[i].end());
            auto it = lower_bound(mat[i].begin(), mat[i].end(), 1);

            int cnt_ones = mat[i].end() - it;

            if (cnt_ones > ones) {
                ones = cnt_ones;
                index = i;
            }
        }

        return {index, ones};
    }
};
