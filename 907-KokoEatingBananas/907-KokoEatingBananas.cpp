// Last updated: 20/07/2025, 20:57:27
class Solution {
public:
    long long numHours(int k, vector<int>& piles) {
        long long hours = 0;
        for (int pile : piles) hours += ceil((double)pile/k);
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int largest = *max_element(piles.begin(), piles.end());
        int l = 1, r = largest;
        int minK = r;
        while (l <= r) {
            int k = (l+r)/2;
            long long h_k = numHours(k, piles);
            if (h_k <= h) {
                minK = min(minK, k);
                r = k - 1;
            }
            else l = k + 1;
        }
        return minK;
    }
};