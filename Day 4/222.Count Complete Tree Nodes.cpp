class Solution {
public:

    int count(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int left = count(root->left);
        int right = count(root->right);
        return 1+left+right;
    }
    int countNodes(TreeNode* root) {
        return count(root);
    }
};
