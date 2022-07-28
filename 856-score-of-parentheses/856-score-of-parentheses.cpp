class Solution {
public:
    int scoreOfParentheses(string s) {
        int l = s.length();

        stack<int>st;
                st.push(0);
        for(int i=0;i<l;i++){
            if(s[i]=='('){
                st.push(0);
            }
            else{
                int A = st.top();
                int val = 0;
                st.pop();
                if(A>0)
                    val=2*A;
                else
                    val =1;
                st.top()+= val;
            }
        }
        return st.top();
    }
};