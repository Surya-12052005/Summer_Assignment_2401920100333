// Linked_List_Cycle
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
        ListNode *slow = head;  //slow → moves 1 step
        ListNode *fast = head;  //fast → moves 2 steps

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true; // Cycle detected
            }
        }
        return false; // No cycle
    }
};


//[ListNode *]   [slow]   =   [head]
//   type        variable      value
//ListNode:"It’s a node of a linked list:"

/*struct ListNode {
    int val;
    ListNode* next;
};*/

/** (ListNode*) */
//“This variable will store the address of a ListNode”