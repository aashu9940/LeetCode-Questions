class Solution {
public:
    void func(int ind,vector<int>&nums,vector<vector<int>>&ans,vector<int>ds,int n){
        if(ind==n){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        func(ind+1,nums,ans,ds,n);
        ds.pop_back();
        func(ind+1,nums,ans,ds,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        vector<int>ds;
        func(0,nums,ans,ds,n);
       return ans;
    }
};