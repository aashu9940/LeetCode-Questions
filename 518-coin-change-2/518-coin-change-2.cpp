class Solution {
    int f(int ind,int T,vector<int>&coins,int n,vector<vector<int>>&dp){
        if(ind==0){
            if(T%coins[ind]==0)return 1;
            else return 0;
        }
        if(dp[ind][T]!=-1)return dp[ind][T];
        int nottake = f(ind-1,T,coins,n,dp);
        int take = 0;
        if(coins[ind]<=T)take = f(ind,T-coins[ind],coins,n,dp);
        
        return dp[ind][T] = take+nottake;
    }
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return f(n-1,amount,coins,n,dp);
    }
};