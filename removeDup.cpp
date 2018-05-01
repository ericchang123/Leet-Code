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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr;
        ListNode* dup;
        curr = head;
        while(curr != NULL && curr->next != NULL){
            if(curr->val == curr->next->val){
                dup = curr->next;
                curr->next = dup->next;
                delete(dup);
            }
            else{
                curr = curr->next;
            }
        }
        return head;
    }
};
