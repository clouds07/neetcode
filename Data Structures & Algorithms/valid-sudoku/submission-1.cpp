class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_map<char, int> rowDup;
        std::unordered_map<char, int> colDup;
        std::unordered_map<char, int> sqDup;

        for (auto i = 0; i < board.size(); ++i) {
            for (auto j = 0; j < board.size(); ++j) {
                if (board[i][j] != '.') {
                    if (rowDup.contains(board[i][j])) {
                        return false;
                    } else {
                        rowDup[board[i][j]] = 1;
                    }
                }
                if (board[j][i] != '.') {
                    if (colDup.contains(board[j][i])) {
                        return false;
                    } else {
                        colDup[board[j][i]] = 1;
                    }
                }
            }
            rowDup.clear();
            colDup.clear();
        }

        for (auto sq = 0; sq < 9; ++sq) {
            int rowOffset = (sq / 3) * 3;
            int colOffset = (sq % 3) * 3;
            for (auto i = 0; i < 3; ++i) {
                for (auto j = 0; j < 3; ++j) {
                    if (board[i + rowOffset][j + colOffset] != '.') {
                        if (sqDup.contains(board[i + rowOffset][j + colOffset])) {
                            return false;
                        } else {
                            sqDup[board[i + rowOffset][j + colOffset]] = 1;
                        }
                    }
                }
            }
            sqDup.clear();
        }
        return true;
    }
};
