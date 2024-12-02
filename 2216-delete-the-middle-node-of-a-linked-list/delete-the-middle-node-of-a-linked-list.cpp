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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* currOne = head;
        ListNode* currTwo = head;
        ListNode* prev = nullptr;

        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }
        while(currTwo != nullptr && currTwo->next != nullptr){
            prev = currOne;
            currOne = currOne->next;
            currTwo = currTwo->next->next;
        }
        if (prev != nullptr)
            prev->next = currOne->next;
        return head;        

    }
};