// Last updated: 20/07/2025, 20:57:47
class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1, rob2;

        for (int num : nums) {
            int newRob = max(rob1 + num, rob2);
            rob1 = rob2;
            rob2 = newRob;
        }

        return rob2;
    }
};