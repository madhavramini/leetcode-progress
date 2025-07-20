// Last updated: 20/07/2025, 20:57:32
class Solution {
public:
    int calcArea(vector<vector<int>>& grid, int i, int j) {
        if (i >= 0 && j >= 0 && i < grid.size() && j < grid[0].size() && grid[i][j]==1) {
            grid[i][j] = 0;
            return 1 + calcArea(grid,i+1,j) + calcArea(grid,i-1,j) + calcArea(grid,i,j+1) + calcArea(grid,i,j-1);
        }
        return 0;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        for (int i = 0; i < grid.size(); i++) for(int j = 0; j < grid[0].size(); j++) maxArea = max(maxArea, calcArea(grid, i, j));
        return maxArea;
    }
};