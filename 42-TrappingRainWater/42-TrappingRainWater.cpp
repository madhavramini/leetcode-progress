// Last updated: 20/07/2025, 20:58:11
class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() == 0) return 0;
        int l = 0, r = height.size()-1;
        int leftMax = height[l], rightMax = height[r];
        int sum = 0;

        while (l < r){
            if (leftMax < rightMax){
                l += 1;
                leftMax = max(leftMax, height[l]);
                sum += leftMax - height[l];
            }
            else {
                r -= 1;
                rightMax = max(rightMax, height[r]);
                sum += rightMax - height[r];
            }
        }
        return sum;
    }
};