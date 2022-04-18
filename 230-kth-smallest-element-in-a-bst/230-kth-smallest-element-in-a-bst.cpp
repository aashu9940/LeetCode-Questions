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
public:
    void inorder(TreeNode*root,vector<int>&v){
        if(!root)return ;
        
        if(root->left){
            inorder(root->left,v);
        }
        if(root){
            v.push_back(root->val);
        }
        if(root->right){
            inorder(root->right,v);
        }
        
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>v;
        inorder(root,v);
        
        int l= v[k-1];
        return l;
        
    }
};