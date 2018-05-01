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
    bool hasCycle(ListNode *head) {
        ListNode *slow = head, *fast1 = head, *fast2 = head;
        while(slow && (fast1 = fast2->next) && (fast2 = fast1->next)){
            if(slow == fast1 || slow == fast2)
                return true;
            slow = slow->next;
        }
        return false;
    }
};
