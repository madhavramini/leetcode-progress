// Last updated: 20/07/2025, 20:58:34
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *current = new ListNode();
        ListNode *head = current;
        int sum = 0;
        int carry = 0;
        while (l1 || l2 || carry != 0)
        {
            sum = carry;
            if(l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum/10;
            sum = sum%10;
            current->next = new ListNode(sum);
            current = current->next;
        }
        return head->next;
    }
};