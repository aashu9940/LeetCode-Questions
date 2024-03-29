class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,0));
        
        for(int T=0;T<=amount;T++){
            if(T%coins[0]==0)dp[0][T] = T/coins[0];
            else dp[0][T]=1e9;
        }
        for(int ind = 1;ind<n;ind++){
            for(int T=0;T<=amount;T++){
                
                int nottake = 0+dp[ind-1][T];
                int take = INT_MAX;
                if(coins[ind]<=T)
                    take = 1+dp[ind][T-coins[ind]];
      
        
         dp[ind][T] = min(take,nottake);
                
            }
        }
        int ans =  dp[n-1][amount];
        if(ans>=1e9)return -1;
        else return ans;
    }
};

//memoization
// class Solution {
//     int f(int ind,vector<int>& coins, int amount, vector<vector<int>>&dp){
//         if(ind==0){
//             if(amount%coins[ind]==0)return amount/coins[ind];
//             else return 1e9;
//         }
//         if(dp[ind][amount]!=-1)return dp[ind][amount];
//        int nottake = 0+f(ind-1,coins,amount,dp);
//        int take = INT_MAX;
//        if(coins[ind]<=amount)
//             take = 1+f(ind,coins,amount-coins[ind],dp);
      
        
//         return dp[ind][amount] = min(take,nottake);
//     }
// public:
//     int coinChange(vector<int>& coins, int amount) {
//         int n= coins.size();
//         vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        
//         int ans =  f(n-1,coins,amount,dp);
//         if(ans>=1e9)return -1;
//         else return ans;
//     }
// };