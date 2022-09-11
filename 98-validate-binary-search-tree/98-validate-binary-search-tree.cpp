/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    bool isCheck(TreeNode* root,long min,long max){
        if(!root)return true;
        if(root->val<=min or root->val>=max)return false;
        
       return isCheck(root->left,min,root->val) and isCheck(root->right,root->val,max);
    }
public:
    bool isValidBST(TreeNode* root) {
        return isCheck(root,LONG_MIN,LONG_MAX);
    }
};