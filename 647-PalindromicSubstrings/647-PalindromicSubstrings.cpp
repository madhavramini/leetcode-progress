// Last updated: 20/07/2025, 20:57:35
class Solution {
public:
    int countSubstrings(string s) {
        int num = 0;
        for (int i = 0; i < s.length(); i++) {
            int l = i, r = i;
            while (l >= 0 && r < s.length() && s[r]==s[l]) {
                num++;
                r++;
                l--;
            }

            l = i, r = i+1;
            while (l >= 0 && r < s.length() && s[r]==s[l]) {
                num++;
                r++;
                l--;
            }
        }
        return num;
    }
};