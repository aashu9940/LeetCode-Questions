class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        int n = nums.size();
        if(n==0)return ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               long target2 = target-(long)nums[j]-(long)nums[i];
                int left = j+1;
                int right = n-1;
                while(left<right){
                   long long int two_sum = (long)nums[left]+(long)nums[right];
                    if(target2>(two_sum))left++;
                   else if(target2<(two_sum))right--;
                    else{
                        vector<int>quadruple(4,0);
                        quadruple[0]=nums[i];
                        quadruple[1]=nums[j];
                        quadruple[2]=nums[left];
                        quadruple[3]=nums[right];
                        ans.push_back(quadruple);
                        
                        while(left<right and nums[left]== quadruple[2])++left;
                        while(right>left and nums[right]== quadruple[3])--right;
                        
                    }
                }//while-end
                while(j+1<n and nums[j+1]==nums[j])++j;
                
            }
            while(i+1<n and nums[i+1]==nums[i])++i;
        }
        return ans;
    }
};