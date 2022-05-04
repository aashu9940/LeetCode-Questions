class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int>aux = nums;
        sort(aux.begin(),aux.end());
        
        if(nums==aux)return 0;
        int i = 0 , j = nums.size()-1;
        
        while(nums[i]==aux[i] || nums[j]==aux[j]){
            
            if(nums[i]==aux[i]){
                i++;
            }
            else if(nums[j]==aux[j]){
                j--;
            }
            
        }
    return j-i+1;
    }
        
        
    
};