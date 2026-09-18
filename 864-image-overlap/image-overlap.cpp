class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {

        int n = img1.size();
        int ans = 0;

        // Try every possible vertical shift
        for (int rowShift = -(n - 1); rowShift <= n - 1; rowShift++) {

            // Try every possible horizontal shift
            for (int colShift = -(n - 1); colShift <= n - 1; colShift++) {

                int overlap = 0;

                // Check every cell of img1
                for (int i = 0; i < n; i++) {

                    for (int j = 0; j < n; j++) {

                        // If img1[i][j] is shifted,
                        // this is its new position
                        int newI = i + rowShift;
                        int newJ = j + colShift;

                        // Check whether new position is inside img2
                        if (newI >= 0 && newI < n &&
                            newJ >= 0 && newJ < n) {

                            // Overlap only when both are 1
                            if (img1[i][j] == 1 &&
                                img2[newI][newJ] == 1) {

                                overlap++;
                            }
                        }
                    }
                }

                // Keep maximum overlap
                ans = max(ans, overlap);
            }
        }

        return ans;
    }
};