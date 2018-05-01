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
    bool isPalindrome(ListNode* head) {
        stack<int> pal;
        ListNode* curr = head;
        while(curr != NULL){
            pal.push(curr->val);
            curr = curr->next;
        }
        curr = head;
        while(curr != NULL){
            if(curr->val != pal.top())
                return false;
            curr = curr->next;
            pal.pop();
        }
        return true;
    }
};
