class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int l1 = s.length();
        int l2 = t.length();
        string str1;
        string str2;
        int i=0,j=0;
        int k;
        for( k=0;k<l1;k++){
                if(s[k] != '#'){
                    s[i]=s[k];
                    i++;
                }
            else if(i>0){
                i--;
            }
            }
        for(k=0;k<l2;k++){
            if(t[k]!='#'){
                t[j]=t[k];
                j++;
            }
            else if(j>0){
                j--;
            }
        }
        if(i!=j)return false;
        for(int k=0;k<i;k++){
            
        if(s[k]!=t[k]) return false;
            
        }
        
        return true;
       
    }
};