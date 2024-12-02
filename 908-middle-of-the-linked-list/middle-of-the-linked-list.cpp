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
        ListNode* currOne = head;
        ListNode* currTwo = head;
        while(currTwo != nullptr && currTwo->next != nullptr){
            currOne = currOne->next;
            currTwo = currTwo->next->next;
        }
        return currOne;

    }
};