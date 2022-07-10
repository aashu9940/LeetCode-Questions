class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int prev = cost[0];
        int prev2 = cost[1];
        
        if(n<=2)return min(prev,prev2);
        
        for(int i=2;i<n;i++){
            int curi = min(prev,prev2)+cost[i];
            prev = prev2;
            prev2 = curi;
        }
        return min(prev,prev2);
    }
};