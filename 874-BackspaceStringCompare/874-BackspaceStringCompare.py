# Last updated: 20/07/2025, 20:57:29
class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        s_l = []
        t_l = []
        for c in s:
            if c == '#':
                if s_l:
                    s_l.pop()
            else:
                s_l.append(c)
        for c in t:
            if c == '#':
                if t_l:
                    t_l.pop()
            else:
                t_l.append(c)
        return s_l == t_l