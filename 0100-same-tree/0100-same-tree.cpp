class Solution {
public:
     

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;   
        
        // Case 2: One is null, the other is not
        if (!p || !q) return false;

        // Case 3: Values differ
        if (p->val != q->val) return false;
      // check ek sath so that if one differ serach stops earlier
        
 return  isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};