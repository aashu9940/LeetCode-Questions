class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        int c = n/2;
        for(auto i = m.begin();i!=m.end();i++){
            if(i->second>c)return i->first;
        }
       return 0;
    }
};