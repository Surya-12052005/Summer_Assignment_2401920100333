// Middle_Of_The_Linked_List
/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
public:
    ListNode* middleNode(ListNode* head) {      //head stores the address of the first node:

        ListNode* slowPtr = head;   //ListNode* ptr = head;   ----"ptr is a pointer that can store the address of a ListNode."
        ListNode* fastPtr = head;

        while (fastPtr != NULL && fastPtr->next != NULL) {    // Travel until the fast pointer reaches the last node or null
                                                               //  // This handles both even and odd length lists correctly
            slowPtr = slowPtr->next;          // move 1 step
            fastPtr = fastPtr->next->next;    // move 2 steps
        }
              
        return slowPtr;     // // When fastPtr hits the end, slowPtr is at the middle
    }
};