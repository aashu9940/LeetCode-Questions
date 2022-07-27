class Solution {
    bool f(int ind,vector<int>&nums,int target,vector<vector<int>>&dp){
        
        if(target==0)return true;
        if(ind==0)return (nums[0]==target);
        if(dp[ind][target]!=-1)return dp[ind][target];
        
        bool notTake = f(ind-1,nums,target,dp);
        bool Take = false;
        if(nums[ind]<=target)
            Take = f(ind-1,nums,target-nums[ind],dp);
        
        return dp[ind][target] = Take||notTake;
    }
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int k = sum/2;
        vector<vector<int>> dp(n,vector<int>(k+1,-1));
        if(sum%2!=0)return false;
        return f(n-1,nums,k,dp);
    }
};