class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if(nums.size()<3) return false;
        int n=nums.size();
        stack<pair<int,int>> st;
        st.push({nums[n-1],INT_MIN});
        int last=INT_MIN;
        for(int i=n-2;i>=0;i--){
            while(!st.empty() and st.top().first<nums[i]){
                last=st.top().first;
                st.pop(); 
            }
            if(!st.empty() and nums[i]<st.top().second) return true;
            st.push({nums[i],last});
        }
        return false;
    }
};