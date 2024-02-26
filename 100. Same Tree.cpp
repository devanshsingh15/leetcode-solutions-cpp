class Solution {
public:
    bool ans(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL && q!=NULL){
            return false;
        }
        if(p!=NULL && q==NULL){
            return false;
        }
        if(p->val!=q->val){
            return false;
        }
        bool a=ans(p->left,q->left);
        bool b=ans(p->right,q->right);
        return a&&b;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return ans(p,q);
    }
};
