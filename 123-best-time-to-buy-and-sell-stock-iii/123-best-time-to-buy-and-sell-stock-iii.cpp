class Solution {
    int f(int ind,int buy,int cap,int n,vector<vector<vector<int>>>&dp,vector<int>&prices){
        if(ind==n)return 0;
        if(cap==0)return 0;
        if(dp[ind][buy][cap]!=-1)return dp[ind][buy][cap];
        
        int profit=0;
        if(buy){
        profit = max(-prices[ind]+f(ind+1,0,cap,n,dp,prices),0+f(ind+1,1,cap,n,dp,prices));
        }
        else{
             profit = max(prices[ind]+f(ind+1,1,cap-1,n,dp,prices),0+f(ind+1,0,cap,n,dp,prices));
        }
        return dp[ind][buy][cap]=profit;
        
    }
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return f(0,1,2,n,dp,prices);
    }
};