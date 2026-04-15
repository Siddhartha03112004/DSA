class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> rowMark(rows, 0);
        vector<int> colMark(cols, 0);

        // Mark rows & columns
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    rowMark[i] = 1;
                    colMark[j] = 1;
                }
            }
        }

        // Apply zeroes
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (rowMark[i] || colMark[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};