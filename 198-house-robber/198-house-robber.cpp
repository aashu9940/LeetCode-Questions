class Solution {
public:
    // SPACE OPTIMIZATION
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        int prev =nums[0];
        int prev2 = 0;
        
        for(int i=1;i<n;i++){
            int take = nums[i];
            if(i>1) take+=prev2;
            int not_take = 0+prev;
            int curi = max(take,not_take);
            prev2 = prev;
            prev = curi;
            
        }
        return prev;
    }
};




//     MEMOIZATION :-

// class Solution {
//     int f(int ind,vector<int>& nums,vector<int>&dp){
//         if(ind==0)return nums[ind];
//         if(ind<0)return 0;
//         if(dp[ind]!=-1)return dp[ind];
        
//         int pick = nums[ind]+f(ind-2,nums,dp);
//         int not_pick = 0+f(ind-1,nums,dp);
        
//         return dp[ind] =  max(pick,not_pick);
//     }
// public:
//     int rob(vector<int>& nums) {
//            int n = nums.size();
//         vector<int>dp(n,-1);
     
//         return f(n-1,nums,dp);
        
//     }
// };



// TABULATION :-

// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>dp(n,0);
//         dp[0]=nums[0];
//         int neg = 0;
        
//         for(int i=1;i<n;i++){
//             int take = nums[i];
//             if(i>1) take+=dp[i-2];
//             int not_take = 0+dp[i-1];
//             dp[i] = max(take,not_take);
            
//         }
//         return dp[n-1];
//     }
// };