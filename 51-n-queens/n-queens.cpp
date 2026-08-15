class Solution {
public:
    vector<vector<string>> result;

    void printBoard(vector<vector<char>> board) {
        int n = board.size();
        vector<string> temp;
        for(int i=0; i<n; i++) {
            string row = "";
            for(int j=0; j<n; j++) {
                row += board[i][j];
            }
            temp.push_back(row);
        }
        result.push_back(temp);
    }

    bool isSafe(vector<vector<char>> board, int row, int col) {
        int n = board.size();
        // horizonatal
        for(int j=0; j<n; j++) {
            if(board[row][j] == 'Q') {
                return false;
            }
        }

        // vertical
        for(int i=0; i<row; i++) {
            if(board[i][col] == 'Q') {
                return false;
            }
        }

        // diagonal left 
        for(int i=row, j=col; i>=0 && j>=0; i--, j--) {
            if(board[i][j] == 'Q') {
                return false;
            }
        }

        // diagonal right
        for(int i=row, j=col; i>=0 && j<n; i--, j++) {
            if(board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void nQueens(vector<vector<char>> board, int row) {
        int n = board.size();
        if(row == n) {
            printBoard(board);
            return;
        }

        for(int j=0; j<n; j++) {  // cols
            if(isSafe(board, row, j)) {
                board[row][j] = 'Q';
                nQueens(board, row+1);
                board[row][j] = '.';
            }
        }     
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> board;
        for(int i=0; i<n; i++) {
            vector<char> newRow;
            for(int j=0; j<n; j++) {
                newRow.push_back('.');
            }
            board.push_back(newRow);
        }

        nQueens(board, 0);

        return result;
    }
};