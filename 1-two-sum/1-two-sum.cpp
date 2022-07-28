class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>m;
        vector<int>sol;
        for(int i=0;i<n;i++){
            if(m.find(target-nums[i])!=m.end()){
                sol.push_back(i);
                sol.push_back(m[target-nums[i]]);
                return sol;
            }
            else m[nums[i]]=i;
        }
        return sol;
    }
};