# Last updated: 20/07/2025, 20:57:15
class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        for i in range(len(nums)-1):
            nums[i+1] += nums[i]
        return nums
