// Last updated: 20/07/2025, 20:57:26
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *hare = head;
        ListNode *tortoise = head;
        while(true) {
            if(!hare || !hare->next) return tortoise;
            tortoise = tortoise->next;
            hare = hare->next->next;
        }
    }
};