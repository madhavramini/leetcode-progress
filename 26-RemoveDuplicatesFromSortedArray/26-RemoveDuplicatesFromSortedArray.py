# Last updated: 20/07/2025, 20:58:17
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        while i < len(nums):
            if len(nums) > 1:
                if nums[i] == nums[i-1]:
                    nums.pop(i)
                else:
                    i += 1
            else:
                return