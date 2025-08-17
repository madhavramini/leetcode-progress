// Last updated: 17/08/2025, 20:26:16
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> counter;
        for (int num : nums) {
            if (counter.count(num)) return true;
            counter.insert(num);
        }
        return false;
    }
};