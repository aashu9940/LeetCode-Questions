class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int l = nums.size();
        int i,j;
        int s =-1,e=-1;
        for( i=0;i<l;i++){
            if(nums[i]==target){
                 s = i;
                
                break;
            }
        }
        ans.push_back(s);
        
        for( j=l-1;j>=0;j--){
            if(nums[j]==target){
                 e = j;
                break;
            }
        }
        ans.push_back(e);
        return ans;
        
    }
};