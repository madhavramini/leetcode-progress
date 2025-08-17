// Last updated: 17/08/2025, 20:26:11
class Solution {
public:
    int numSquares(int n) {
        vector<int> sqs;
        for (int i = 0; pow(i,2) <= n; i++) sqs.push_back(pow(i,2));
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0;
        dp[1] = 1;
        for (int x = 2; x <= n; x++) {
            for (int sq : sqs) {
                if (x-sq < 0) continue;
                if (dp[x-sq] == INT_MAX) continue;
                dp[x] = min(dp[x-sq]+1,dp[x]);
            }            
        }
        return dp[n];
    }
};