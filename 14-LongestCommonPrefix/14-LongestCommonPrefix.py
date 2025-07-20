# Last updated: 20/07/2025, 20:58:22
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        s = ""
        k=strs[len(strs)-1]
        for i in range(len(strs[0])):
            if(strs[0][i]!=k[i]):
                break
            else:
                s=s+k[i]
        return s