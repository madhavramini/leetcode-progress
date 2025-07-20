# Last updated: 20/07/2025, 20:57:57
class Node:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        current = check = Node()
        current = head
        if not current:
            return head
        check = head.next
        while current and check:
            if current.val != check.val:
                current.next = check
                current = current.next
            check = check.next
            if check == None:
                current.next = None
        return head