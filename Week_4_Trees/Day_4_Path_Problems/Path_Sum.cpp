// Path_Sum
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        //       5
        //      / \
        //     4   8
        // targetSum = 9
        // root->val = 5

        if (!root) return false;

        if (!root->left && !root->right)
            return targetSum == root->val;

        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};