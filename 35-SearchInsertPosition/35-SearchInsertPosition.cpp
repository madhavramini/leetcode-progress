// Last updated: 20/07/2025, 20:58:13
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid;
        while (left <= right) {
            mid = (int)((left+right)/2);
            if (target == nums[mid]) return mid;
            else if (target > nums[mid]) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return left;
    }
};