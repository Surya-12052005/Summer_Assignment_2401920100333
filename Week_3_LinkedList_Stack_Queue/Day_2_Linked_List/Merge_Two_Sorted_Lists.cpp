// Merge_Two_Sorted_Lists
/**
 * Definition for singly-linked list.   //struct = user-defined data type
 * struct ListNode {               //ListNode = name of the structure (It represents one node of a linked list) 
 *     int val;                   //Stores the data/value of the node
 *     ListNode *next;          //* means pointer (next stores address of next node)
 *     ListNode() : val(0), next(nullptr) {}  //Default constructor(Creates node with:value = 0,next = NULL)
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;   //We don’t want to modify original head pointers(curr1 → traverses list1)
        ListNode* curr2 = list2;  //So we create temporary pointers(curr2 → traverses list2)
        ListNode* dummyNode = new ListNode(-1);  //dummyNode → [-1 | NULL]
        ListNode* temp = dummyNode;//Used to build the merged list (Always points to last node of result)

        while(curr1 && curr2) {  //Loop runs until one list becomes NULL(curr1 != NULL),(curr2 != NULL)
            if(curr1->val < curr2->val) {  //means access value from pointer(Same as (*curr1).val)
                temp->next = curr1;   //Attach curr1 node to result.
                temp = curr1;         //Move temp forward
                curr1 = curr1->next;  //Move in list1
            }
            else {
                temp->next = curr2;   //Same logic for second list
                temp = curr2;
                curr2 = curr2->next;
            }
        }                           //One list is finished, but the other still has elements.
        if(curr1) temp->next = curr1;  //If list1 still has nodes → attach all remaining
        if(curr2) temp->next = curr2;   //Same for list2
        return dummyNode->next;       //First node is dummy (-1), we skip it
    }
};