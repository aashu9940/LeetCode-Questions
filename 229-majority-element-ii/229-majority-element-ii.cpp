class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        int n = nums.size();
        int c = n/3;
        for(auto i = m.begin();i!=m.end();i++){
            if(i->second > c )ans.push_back(i->first);
        }
        return ans;
    }
};
