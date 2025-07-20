// Last updated: 20/07/2025, 20:58:32
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        if (len <= 1) return len;
        int l = 0;
        int maxL = 0;
        for (int r = 0; r < len; r++) {
            while (s.substr(l, r-l).find(s[r]) != string::npos) l++;
            while (l+1 < len && s[l]==s[l+1]) {
                l++;
                r = l;
            }
            maxL = max(r-l+1, maxL);
        }
        return maxL;
    }
};