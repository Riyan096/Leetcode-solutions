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
    ListNode* insertionSortList(ListNode* head) {
        if(!head){
            return head;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = head;
        while (curr && curr->next) {
            if (curr->next->val < curr->val) {
                ListNode* toInsert = curr->next;
                curr->next = toInsert->next;
                ListNode* pre = dummy;
                while (pre->next && pre->next->val < toInsert->val) {
                    pre = pre->next;
                }
                toInsert->next = pre->next;
                pre->next = toInsert;
            } else {
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};