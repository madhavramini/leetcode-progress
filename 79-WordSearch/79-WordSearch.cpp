// Last updated: 20/07/2025, 20:57:59
class Solution {
public:
    int ROWS, COLS, len;
    bool isValid(int r, int c) {return r >= 0 && c >= 0 && r < ROWS && c < COLS;}
    bool dfs(vector<vector<char>>& board, int i, int j, string word, int ptr, vector<vector<bool>>& visited) {
        if (ptr == len) return true;
        if (!isValid(i,j) || visited[i][j] || board[i][j] != word[ptr]) return false;
        visited[i][j] = true;
        bool found = dfs(board, i+1, j, word, ptr+1, visited) || dfs(board, i-1, j, word, ptr+1, visited) || dfs(board, i, j+1, word, ptr+1, visited) || dfs(board, i, j-1, word, ptr+1, visited);
        visited[i][j] = false;
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        ROWS = board.size();
        COLS = board[0].size();
        len = word.length();
        vector<vector<bool>> visited(ROWS, vector<bool>(COLS, false));

        for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < COLS; c++) {
                if (dfs(board,r,c,word,0,visited)) return true;
            }
        }

        return false;
    }
};