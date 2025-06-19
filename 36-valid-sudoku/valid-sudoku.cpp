class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; ++i) {
            unordered_set<char> row;
            unordered_set<char> col;
            unordered_set<char> box;

            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != '.') {
                    if (row.count(board[i][j]))
                        return false;
                    row.insert(board[i][j]);
                }
                if (board[j][i] != '.') {
                    if (col.count(board[j][i]))
                        return false;
                    col.insert(board[j][i]);
                }
                int boxRow = 3 * (i / 3) + j / 3;
                int boxCol = 3 * (i % 3) + j % 3;
                if (board[boxRow][boxCol] != '.') {
                    if (box.count(board[boxRow][boxCol]))
                        return false;
                    box.insert(board[boxRow][boxCol]);
                }
            }
        }
        return true;
    }
};
