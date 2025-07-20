# Last updated: 20/07/2025, 20:58:15
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        while val in nums:
            nums.remove(val)     