// Reverse_Linked_List
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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;   // previous node
        ListNode* curr = head;   // current node
        ListNode* next = NULL;   // next node

        while (curr != NULL) {

            next = curr->next; // store next node (next pointer points to the next node of curr)
            curr->next = prev;  // reverse the link
            
            prev = curr;        // move prev forward
            curr = next;        // move curr forward
        }
        
        return prev; // new head
    }
};
// initiallt prev, next pointer point to the null value.

//          |  1  ||  2  ||  3  |
//     |       |                      |
//   prev     curr                   next
//shridha maam video (10 min).
