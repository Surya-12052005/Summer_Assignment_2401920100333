// Binary_Tree_Inorder_Traversal
class Solution {
public: 
    vector<int> ans;                  //Stores the traversal result.

    void inorder(TreeNode* root) {   //This function performs inorder traversal on the subtree whose root is root.
        if (root == NULL)
            return;

        inorder(root->left);      // Left   //Before visiting the current node, we first process everything on the left.    
        ans.push_back(root->val); // Root  //Now store the current node value.
        inorder(root->right);     // Right  //After processing the current node, move to the right subtree.
    }

    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
};

/*Left → Root → Right

For every node:
1.Traverse the left subtree.
2.Visit the current node.
3.Traverse the right subtree.*/