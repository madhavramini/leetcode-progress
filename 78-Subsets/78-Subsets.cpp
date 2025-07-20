// Last updated: 20/07/2025, 20:58:00
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        if (nums.empty()) return {{}};
        if (nums.size()==1) return {{}, {nums[0]}};
        vector<vector<int>> powerSet;
        int num = nums[0];
        nums.erase(nums.begin());
        vector<vector<int>> sets = subsets(nums);
        powerSet.insert(powerSet.end(), sets.begin(), sets.end());
        for (int i = 0; i < sets.size(); i++) sets[i].push_back(num);
        powerSet.insert(powerSet.end(), sets.begin(), sets.end());
        return powerSet;
    }
};