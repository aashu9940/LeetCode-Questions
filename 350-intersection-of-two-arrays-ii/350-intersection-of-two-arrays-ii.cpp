class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int l1 = nums1.size();
        int l2 = nums2.size();
        
        int i=0;
        int j=0;
        
        while(i<l1 and j<l2 ){
            if(nums1[i]>nums2[j])j++;
            else if(nums1[i]<nums2[j])i++;
            else{
                ans.push_back(nums1[i]);
                
                i++;
                j++;
            }
        }
        return ans;
    }
};