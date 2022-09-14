class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int mid=nums[size/2];
        return mid;
    }
};