class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int index = 0, ones = 0;

        for (int i = 0; i < mat.size(); i++) {
            int cnt = count(mat[i].begin(), mat[i].end(), 1);

            if (cnt > ones) {
                ones = cnt;
                index = i;
            }
        }

        return {index, ones};
    }
};
