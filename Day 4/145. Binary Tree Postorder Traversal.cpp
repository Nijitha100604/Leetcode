class Solution {
public:

    vector<int> postorder(vector<int> &ans, TreeNode* root){
        if(root == NULL)
            return ans;
        postorder(ans,root->left);
        postorder(ans,root->right);
        ans.push_back(root->val);
        return ans;
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        return postorder(ans, root);
    }
};
