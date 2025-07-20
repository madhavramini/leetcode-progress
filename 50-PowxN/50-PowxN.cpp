// Last updated: 20/07/2025, 20:58:08
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long nn = n;
        if (nn < 0) nn = -1*nn;
        while (nn) {
    if (nn % 2) {
      ans = ans * x;
      nn = nn - 1;
    } else {
      x = x * x;
      nn = nn / 2;
    }
  }
  if (n < 0) ans = (double)(1.0) / (double)(ans);
  return ans;
    }
};