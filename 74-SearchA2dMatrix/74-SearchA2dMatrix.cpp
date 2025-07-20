// Last updated: 20/07/2025, 20:58:01
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int top = 0, bottom = m-1;
        int middle = 0;
        while (top <= bottom && m != 1) {
            int mid = (top+bottom)/2;
            if (matrix[mid][0] <= target && matrix[mid][n-1] >= target) {
                if (matrix[mid][0] == target || matrix[mid][n-1] == target) return true;
                middle = mid;
                break;
            }
            else if (matrix[mid][0] > target) {
                bottom = mid - 1;
            }
            else {
                top = mid + 1;
            }
        }
        if (n == 1) return target == matrix[middle][0];
        int l = 0, r = n-1;
        while (l <= r) {
            int mid = (l+r)/2;
            if (matrix[middle][mid] == target) return true;
            else if (matrix[middle][mid] < target) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
};