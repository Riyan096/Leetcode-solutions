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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = new ListNode(0, head);
        ListNode* curr = temp;
        
        if(head == nullptr){
            return nullptr;
        }
        while(curr != nullptr){
            while(curr->next != nullptr && curr->next->val == val){
                curr->next = curr->next->next;
            }
            curr = curr->next;
        }
        ListNode* result = temp->next;
        delete temp;
        return result;
        
    }
};