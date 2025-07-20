// Last updated: 20/07/2025, 20:57:24
class Solution {
public:
    int ROWS, COLS;
    int numRotten, numFruits, minutes;
    vector<pair<int,int>> directions = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    bool isValid(int r, int c) {
        return r < ROWS && c < COLS && r >= 0 && c >= 0;
    }
    void rot(queue<pair<int,int>>& rotten, vector<vector<int>>& grid) {
        pair<int,int> f = rotten.front();
        rotten.pop();
        for (pair<int,int> dir : directions) {
            int nr = f.first + dir.first, nc = f.second + dir.second;
            if (isValid(nr,nc) && grid[nr][nc] == 1) {
                grid[nr][nc] = 2;
                rotten.push({nr,nc});
                numRotten++;
            }
        }
    }

    int orangesRotting(vector<vector<int>>& grid) {
        numRotten = 0;
        numFruits = 0;
        minutes = 0;
        ROWS = grid.size();
        COLS = grid[0].size();
        queue<pair<int,int>> rotten;
        for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < COLS; c++) {
                if (grid[r][c] == 2) {
                    rotten.push({r,c});
                    numRotten++;
                    numFruits++;
                }
                if (grid[r][c] == 1) {
                    numFruits++;
                }
            }
        }
        if (numFruits-numRotten == 0) return 0; 
        while (!rotten.empty()) {
            if (numRotten == numFruits) return minutes;
            int n = rotten.size();
            for (int i = 0; i < n; i++) {
                rot(rotten, grid);
            }
            minutes++;
        }
        return -1;
    }
};