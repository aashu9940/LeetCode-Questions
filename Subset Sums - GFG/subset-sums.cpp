//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void func(int ind,int sum,vector<int> &arr,int N,vector<int>&subsets){
        if(ind==N){
            subsets.push_back(sum);
            return;
        }
        
        func(ind+1,sum+arr[ind],arr,N,subsets);
        
        func(ind+1,sum,arr,N,subsets);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>sumsubsets;
        func(0,0,arr,N,sumsubsets);
        sort(sumsubsets.begin(),sumsubsets.end());
        return sumsubsets;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends