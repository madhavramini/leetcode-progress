# Last updated: 20/07/2025, 20:57:56
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        if len(nums2) == 0:
            return
        for num in nums2:
            nums1.remove(0)
            nums1.append(num)
        nums1.sort()