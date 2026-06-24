// Search_In_A_BST
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        // Loop runs as long as we haven't hit a dead end and haven't found the value
        while (root != nullptr && root->val != val) {
            
            if (root->val > val) {
                root = root->left;  // If target is smaller, go left
            } else {
                root = root->right; // If target is larger, go right
            }
        }
        
        return root; // Returns the matching node, or nullptr if it wasn't found
    }
};