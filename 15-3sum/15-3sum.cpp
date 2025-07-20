// Last updated: 20/07/2025, 20:58:21
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i>0 && nums[i]==nums[i-1]) continue;
            int l = i+1, r = nums.size()-1;
            while (l<r){
                int threeSum = nums[i]+nums[l]+nums[r];
                if (threeSum>0) r -= 1;
                else if (threeSum<0) l+=1;
                else {
                    result.push_back({nums[i],nums[l],nums[r]});
                    l+=1;
                    while (nums[l]==nums[l-1] && l<r) l+=1;
                }
            }
        }
        return result;
    }
};