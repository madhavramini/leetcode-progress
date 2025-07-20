// Last updated: 20/07/2025, 20:57:19
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int p1 = 0, p2 = 0;
        while (p1 < word1.size() || p2 < word2.size()) {
            if (p1 < word1.size()) {
                s += word1[p1];
                p1++;
            }
            if (p2 < word2.size()) {
                s += word2[p2];
                p2++;
            }
        }
        return s;
    }
};