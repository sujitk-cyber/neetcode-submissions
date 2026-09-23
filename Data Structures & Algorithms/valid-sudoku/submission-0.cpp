class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> HSrows;
        unordered_set<int> HScolumns;
        unordered_set<int> HS3by3;
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') {
                    continue;
                }
                int num = board[r][c] - '0';
                int box = (r / 3) * 3 + (c / 3);
                int rowKey = r * 10 + num;
                int columnKey = c * 10 + num;
                int boxKey = box * 10 + num;
                if (HSrows.count(rowKey) || HScolumns.count(columnKey) || HS3by3.count(boxKey)) {
                    return false;
                }
                HSrows.insert(rowKey);
                HScolumns.insert(columnKey);
                HS3by3.insert(boxKey);
            }
        }
        return true;
    }
};
