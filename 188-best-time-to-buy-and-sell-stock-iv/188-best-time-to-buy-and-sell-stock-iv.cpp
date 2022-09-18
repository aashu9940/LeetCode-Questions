class Solution {
    int f(vector<int>& prices,int ind,int buy,int k,vector<vector<vector<int>>>&dp){
        int n = prices.size();
        if(k==0)return 0;
        if(ind==n)return 0;
        if(dp[ind][buy][k]!=-1)return dp[ind][buy][k];
        int profit=0;
        if(buy){
         profit = max(-prices[ind]+f(prices,ind+1,0,k,dp),0+f(prices,ind+1,1,k,dp));
    }
        else{
            profit = max(prices[ind]+f(prices,ind+1,1,k-1,dp),0+f(prices,ind+1,0,k,dp));
        }
        return dp[ind][buy][k]= profit;
    }
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
       
 
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return f(prices,0,1,k,dp);
    }
};