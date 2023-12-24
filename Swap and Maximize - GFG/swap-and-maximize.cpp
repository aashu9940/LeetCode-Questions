//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    vector<int>seq;
    sort(arr,arr+n);
    
    for(int i=0;i<n/2;i++){
        seq.push_back(arr[i]);
        seq.push_back(arr[n-i-1]);
    }
    if(n%2!=0)seq.push_back(arr[n/2]);
    
    long long int maxsum=0;
    
    for(int i=0;i<n-1;i++){
        maxsum = maxsum + abs(seq[i]-seq[i+1]);
    }
    
    maxsum = maxsum + abs(seq[n-1]-seq[0]);
    
    return maxsum;
    
}