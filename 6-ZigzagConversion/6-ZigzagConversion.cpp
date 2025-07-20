// Last updated: 20/07/2025, 20:58:28
class Solution {
public:
    string convert(string s, int numRows) {
        if (s.length() == 1 || numRows == 1) return s;
        string rows[numRows];
        int i = 0, r = 0;
        int inc = 1;
        while (i < s.length() && r >= 0 && r < numRows) {
            rows[r] += s[i];
            i++;
            r += inc;
            if (r==numRows-1 || r == 0) inc = -1 * inc;
        }
        string final = "";
        for (string row : rows) final += row;
        return final;
    }
};