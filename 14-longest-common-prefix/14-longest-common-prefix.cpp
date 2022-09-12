class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans="";
        sort(strs.begin(),strs.end());
        int min = strs[0].size();
        for(int i=0;i<min;i++){
            char c = strs[0][i];
            for(int j=1;j<n;j++){
                if(c!=strs[j][i])return ans;
                
            
            }
                ans+=c;
            
        }
        return ans;
        
        
    }
};