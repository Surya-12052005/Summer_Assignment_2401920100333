// Remove_Nth_Node_From_End
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create a dummy node to handle edge cases smoothly
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        
        // Step 1: Move the fast pointer n steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }
        
        // Step 2: Move both pointers until fast reaches the last node
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        
        // Step 3: Skip the nth node from the end
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;
        
        // Clean up memory
        delete nodeToDelete;
        
        // Return the actual head
        ListNode* newHead = dummy->next;
        delete dummy; 
        return newHead;
    }
};