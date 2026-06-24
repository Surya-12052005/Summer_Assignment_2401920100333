// Lowest_Common_Ancestor_Of_BST
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if (p->val < root->val && q->val < root->val)           //if (p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);     //Since both nodes are on the left side, the answer must also be on the left side.

        if (p->val > root->val && q->val > root->val)           //Check whether both nodes are greater than root.
            return lowestCommonAncestor(root->right, p, q);    //Move to the right subtree and continue searching.

        return root;                                         //This executes when neither of the previous conditions is true.
    }
};