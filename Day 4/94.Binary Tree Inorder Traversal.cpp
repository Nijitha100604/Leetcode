class Solution {
public:

    vector<int> inorder(vector<int> &ans, TreeNode* root)
    {
        if(root == NULL)
            return ans;
        inorder(ans, root->left);
        ans.push_back(root->val);
        inorder(ans,root->right);
        return ans;
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        return inorder(ans, root);
    }
};
