# Last updated: 20/07/2025, 20:58:26
class Solution:
    def isPalindrome(self, x: int) -> bool:
        
        x = str(x)
        n = len(x)
        c = False
        for i in range(n):
            if x[i] == x[-i-1]:
                c = True
            else:
                c = False
                break
        return c