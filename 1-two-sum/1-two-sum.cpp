class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>sol;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            if(m.find(target-nums[i])!=m.end()){
                sol.push_back(i);
                sol.push_back(m[target-nums[i]]);
                return sol;
            }
            m[nums[i]]=i;
        }
        return sol;
    }
};