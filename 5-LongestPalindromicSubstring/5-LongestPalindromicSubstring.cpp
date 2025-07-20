// Last updated: 20/07/2025, 20:58:29
class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, end = 0;
        for (int i = 0; i < s.length(); i++) {
            int l = i, r = i;
            while (l >= 0 && r < s.length() && s[r]==s[l]) {
                if (r-l > end-start) {
                    start = l;
                    end = r;
                }
                r++;
                l--;
            }

            l = i, r = i+1;
            while (l >= 0 && r < s.length() && s[r]==s[l]) {
                if (r-l > end-start) {
                    start = l;
                    end = r;
                }
                r++;
                l--;
            }
        }
        return s.substr(start, end-start+1);
    }
};