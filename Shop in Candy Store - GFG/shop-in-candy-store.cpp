//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        
        sort(candies,candies+N);
        int max=0;
        int min=0;
        
        int i=0;
        int j=N-1;
        
        while(i<=j){
            min+=candies[i];
            i++;
            j-=K;
        }
        
        reverse(candies,candies+N);
        i=0;
        j=N-1;
        while(i<=j){
            max+=candies[i];
            i++;
            j-=K;
        }
        return{min,max};
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends