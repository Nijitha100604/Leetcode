class Solution {
public:

    vector<int> preorder(vector<int> &ans, TreeNode* root){
        if(root == NULL)
            return ans;
        ans.push_back(root->val);
        preorder(ans, root->left);
        preorder(ans, root->right);
        return ans;
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        return preorder(ans, root);
    }
};
