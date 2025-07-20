# Last updated: 20/07/2025, 20:57:41
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        palin = []
        while head:
            palin.append(head.val)
            head = head.next
        l = 0
        r = len(palin)-1
        while l < r and palin[l] == palin[r]:
            l+=1
            r-=1
        return l >= r