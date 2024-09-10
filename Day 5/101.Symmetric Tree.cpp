class Solution {
public:

    bool same(TreeNode* a, TreeNode* b)
    {
        if(a==NULL && b==NULL)
            return true;
        if(a==NULL || b==NULL)
            return false;
        if(a->val != b->val)
            return false;
        return same(a->left,b->right) && same(a->right,b->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return same(root->left, root->right);
    }
};
