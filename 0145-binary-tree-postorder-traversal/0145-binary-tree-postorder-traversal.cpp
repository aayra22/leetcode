
class Solution {
public:
    void helperTraversal(TreeNode* root, vector<int>& ans ){
        if(root == nullptr) return;
        helperTraversal(root->left , ans);
       
         helperTraversal(root->right , ans);
          ans.push_back(root->val);
    }



    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        helperTraversal(root,ans);
        return ans;
    }
};