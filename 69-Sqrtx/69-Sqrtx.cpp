// Last updated: 20/07/2025, 20:58:04
class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int r = x;
        int m = x/2;
        if (x == 0 || x == 1) return x;
        while(l <= r) {
            if (m > x/m) {
                r = m-1;
            }
            if (m == x/m) return m;
            if (m < x/m) {
                l = m+1;
            }
            m = l + (r-l)/2;
        }

        return m-1;
    }
};