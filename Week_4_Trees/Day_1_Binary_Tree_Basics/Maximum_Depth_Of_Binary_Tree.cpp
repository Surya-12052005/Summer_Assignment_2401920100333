// Maximum_Depth_Of_Binary_Tree
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {        //root is the current node.

        if (root == nullptr)        //If there is no node:  the depth is 0;
            return 0;

        int leftDepth = maxDepth(root->left);   //Recursively calculate the depth of the left subtree.
        int rightDepth = maxDepth(root->right);  //Recursively calculate the depth of the right subtree.

        return 1 + max(leftDepth, rightDepth);    //Add 1 in the longest depth.
    }
};