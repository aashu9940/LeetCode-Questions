class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        int sum=0;
        int s;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        s = n*(n+1)/2;
        int ans = abs(sum-s);
        return ans;
    }
};