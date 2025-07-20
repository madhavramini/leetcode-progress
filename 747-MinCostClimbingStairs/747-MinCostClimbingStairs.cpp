// Last updated: 20/07/2025, 20:57:31
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        long unsigned n = cost.size();
        if (n==1) return cost[n-1];
        if (n==2) return min(cost[n-1],cost[n-2]);
        for (long unsigned i = 2; i < n; i++) {
            cost[i] += min(cost[i-1],cost[i-2]);
        }
        return min(cost[n-1], cost[n-2]);
    }
};