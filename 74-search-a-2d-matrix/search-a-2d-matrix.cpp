class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;

        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            auto it = lower_bound(matrix[i].begin(), matrix[i].end(), target);

            if (it != matrix[i].end() && *it == target)
                return true;
        }

        return false;
    }
};