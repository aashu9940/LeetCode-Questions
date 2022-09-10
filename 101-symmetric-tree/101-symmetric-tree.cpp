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
    bool f(TreeNode*r1,TreeNode*r2){
       
        if(r1==NULL and r2==NULL)return true;
        if(r1==NULL or r2==NULL)return false;
         if(r1->val!=r2->val)return false;
        
      return f(r1->left,r2->right)&&f(r1->right,r2->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
     TreeNode* root1 = root->left;
       TreeNode* root2 = root->right;
        return f(root1,root2);
        
    }
};