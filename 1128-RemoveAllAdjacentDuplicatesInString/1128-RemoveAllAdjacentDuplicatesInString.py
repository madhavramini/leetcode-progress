# Last updated: 20/07/2025, 20:57:22
class Solution:
    def removeDuplicates(self, s: str) -> str:
        stack = []
        for c in s:
            if stack:
                if stack[-1] == c:
                    stack.pop()
                else:
                    stack.append(c)
            else:
                stack.append(c)
        s = ""
        for c in stack:
            s+=c
        return s