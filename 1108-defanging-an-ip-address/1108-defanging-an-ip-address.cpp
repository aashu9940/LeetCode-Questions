class Solution {
public:
    string defangIPaddr(string s) {
        int l = s.length();
        string ans = "";
        string add = "[.]";
        
        for(int i=0;i<l;i++){
            if(s[i]!='.'){
                ans+=s[i];
            }
            else {
                ans+=add;
            }
        }
        return ans;
    }
};