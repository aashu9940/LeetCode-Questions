class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = 1e9;
        int profit =0;
        for(int i=0;i<prices.size();i++){
            mini = min(mini,prices[i]);
            profit = max(profit,prices[i]-mini);
        }
        return profit;
    }
};