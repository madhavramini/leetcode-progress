// Last updated: 20/07/2025, 20:57:30
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while(left <= right)
        {
            int mid = (right+left)/2;
            if (target == nums[mid]) return mid;
            if (target > nums[mid]) left = mid+1;
            else right = mid-1;
        }
        return -1;
    }
};