// Construct_Binary_Tree_From_Preorder_And_Inorder
class Solution {
public:
    TreeNode* build(vector<int>& pre, vector<int>& in, int preStart, int inStart, int inEnd) {
        if (preStart >= pre.size() || inStart > inEnd) return NULL;

        TreeNode* root = new TreeNode(pre[preStart]);

        int mid = inStart;
        for (int i = inStart; i <= inEnd; i++) {
            if (in[i] == root->val) {
                mid = i;
                break;
            }
        }

        int leftSize = mid - inStart;

        root->left  = build(pre, in, preStart + 1, inStart, mid - 1);
        root->right = build(pre, in, preStart + leftSize + 1, mid + 1, inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder, 0, 0, inorder.size() - 1);
    }
};