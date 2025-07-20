# Last updated: 20/07/2025, 20:58:07
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l = s.split(" ")
        i = len(l)-1
        while len(l[i]) == 0:
            i-=1
        return len(l[i])