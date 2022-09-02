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
    void f(TreeNode*root,vector<string>&ans,string s){
        if(!root)return;
        if(!root->left and !root->right){
            s+=to_string(root->val);
            ans.push_back(s);
            return;
        }
        s+=to_string(root->val)+"->";
        f(root->left,ans,s);
        f(root->right,ans,s);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string s="";
        f(root,ans,s);
        return ans;
        
    }
};