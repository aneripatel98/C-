/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int count(TreeNode* c){
    int ct=0;
    if(c==NULL) return 0;
    return(1+count(c->left)+count(c->right));
 }
int Solution::maxDepth(TreeNode* A) {
    TreeNode* c=A;
    return count(c);
    
}
