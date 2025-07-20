// Last updated: 20/07/2025, 20:57:40
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *current = node;
        current->val = current->next->val;
        current->next = current->next->next;
    }
};