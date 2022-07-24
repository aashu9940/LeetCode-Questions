class Solution {
    int f(int i,int j,vector<vector<int>>&dp,vector<vector<int>>& matrix){
        if(j<0 or j>=matrix[0].size())return 1e9;
        if(i==0)return matrix[0][j];
        if(dp[i][j]!=-1)return dp[i][j];
        
        int s = matrix[i][j] + f(i-1,j,dp,matrix);
        int ld = matrix[i][j] + f(i-1,j-1,dp,matrix);
        int rd = matrix[i][j] + f(i-1,j+1,dp,matrix);
        
        return dp[i][j] = min(s,min(ld,rd));
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
         int n = matrix.size();
         int m = matrix[0].size();
        vector<vector<int>>dp(n,(vector<int>(m,-1)));
        
        int maxi = 1e9;
        for(int j=0;j<m;j++){
            maxi = min(maxi,f(n-1,j,dp,matrix));
            
        } 
    return maxi;
    }
};