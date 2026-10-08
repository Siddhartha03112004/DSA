class Solution {
public:

    void dfs(vector<vector<char>>& grid, int i, int j) {

        // Out of bounds
        if(i < 0 || i >= grid.size() ||
           j < 0 || j >= grid[0].size())
            return;

        // If water, stop
        if(grid[i][j] == '0')
            return;

        // Mark this land as visited
        grid[i][j] = '0';

        // UP
        dfs(grid, i - 1, j);

        // DOWN
        dfs(grid, i + 1, j);

        // LEFT
        dfs(grid, i, j - 1);

        // RIGHT
        dfs(grid, i, j + 1);
    }

    int numIslands(vector<vector<char>>& grid) {

        int count = 0;

        for(int i = 0; i < grid.size(); i++) {

            for(int j = 0; j < grid[0].size(); j++) {

                if(grid[i][j] == '1') {

                    count++;

                    dfs(grid, i, j);
                }
            }
        }

        return count;
    }
};