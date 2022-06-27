class Solution {
    
    void Sum(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        Sum(ind,target-arr[ind],arr,ans,ds);
        ds.pop_back();
        }
        Sum(ind+1,target,arr,ans,ds);
    
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        vector<vector<int>>ans;
        Sum(0,target,candidates,ans,ds);
        return ans;
    }
};