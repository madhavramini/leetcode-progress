# Last updated: 20/07/2025, 20:57:14
class Solution:
    def makeGood(self, s: str) -> str:
        stack = []
        for c in s:
            if stack:
                if (stack[-1].upper() == c and stack[-1] == c.lower()) or (stack[-1].lower() == c and stack[-1] == c.upper()):
                    stack.pop()
                else:
                    stack.append(c)
            else:
                stack.append(c)
        s = ""
        for c in stack:
            s += c
        return s