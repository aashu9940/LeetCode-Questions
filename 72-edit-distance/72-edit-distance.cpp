class Solution {
    
public:
    int f(int i,int j,string &str1,string &str2,vector<vector<int>>&dp){
        if(i<0)return j+1;
        if(j<0)return i+1;
        if(dp[i][j]!=-1)return dp[i][j];
        if(str1[i]==str2[j])return dp[i][j]=0+f(i-1,j-1,str1,str2,dp);
        return dp[i][j] = 1+min(f(i,j-1,str1,str2,dp),min(f(i-1,j,str1,str2,dp),f(i-1,j-1,str1,str2,dp)));
    }
    
    int minDistance(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(n-1,m-1,str1,str2,dp);
    }
};