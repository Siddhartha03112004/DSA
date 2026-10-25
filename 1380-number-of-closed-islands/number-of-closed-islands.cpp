class Solution {
private:
    bool dfs(int i, int j, vector<vector<bool>>& visited,
             vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        // Out of bounds: the island is not closed
        if (i < 0 || j < 0 || i >= n || j >= m) {
            return false;
        }

        // Water or an already visited cell
        if (grid[i][j] == 1 || visited[i][j]) {
            return true;
        }

        // Mark the land cell as visited
        visited[i][j] = true;

        // Explore all four directions
        bool down = dfs(i + 1, j, visited, grid);
        bool up = dfs(i - 1, j, visited, grid);
        bool right = dfs(i, j + 1, visited, grid);
        bool left = dfs(i, j - 1, visited, grid);

        // All directions must remain closed
        return down && up && right && left;
    }

public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> visited(n, vector<bool>(m, false));

        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0 && !visited[i][j]) {
                    if (dfs(i, j, visited, grid)) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};