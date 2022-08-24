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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        int f=1;
        while(!q.empty()){
            
            int size = q.size();
            vector<int>temp(size);
            for(int i=0;i<size;i++){
                TreeNode*t = q.front();
                q.pop();
                
                
                int index = (f) ? i:(size-i-1);
                temp[index] = t->val;
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            
            
            f=!f;
            ans.push_back(temp);
            
        }
        return ans;
        
        
        
        
        
        
        
    }
};