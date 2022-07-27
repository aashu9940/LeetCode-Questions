class Solution {
    static bool compare(int &a,int &b){
        if((__builtin_popcount(a))==(__builtin_popcount(b)))
             return(a<b);
            
            return __builtin_popcount(a)<__builtin_popcount(b);
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>ans(arr.begin(),arr.end());
        sort(ans.begin(),ans.end(),compare);
        return ans;
        
    }
};