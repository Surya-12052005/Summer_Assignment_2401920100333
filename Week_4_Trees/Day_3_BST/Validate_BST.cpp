// Validate_BST
class Solution {
public:
    bool solver(TreeNode*root,long mini,long maxi){
        if(root==NULL) return true;
        if(root->val>=maxi||root->val<=mini)return false;
        return solver(root->left,mini,root->val)&&solver(root->right,root->val,maxi);
    }
    bool isValidBST(TreeNode* root) {
        return solver(root,LONG_MIN,LONG_MAX);
    }
};