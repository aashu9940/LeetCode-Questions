// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
    public:
    void Sum(int ind,int sum,vector<int>&arr,int N,vector<int>&ds){
        if(ind==N){
            ds.push_back(sum);
            return;
        }
        
        Sum(ind+1,sum+arr[ind],arr,N,ds);
        
       
        Sum(ind+1,sum,arr,N,ds);
        
         
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ds;
        
        Sum(0,0,arr,N,ds);
        sort(ds.begin(),ds.end());
        return ds;
    }
};

// { Driver Code Starts.
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
}  // } Driver Code Ends