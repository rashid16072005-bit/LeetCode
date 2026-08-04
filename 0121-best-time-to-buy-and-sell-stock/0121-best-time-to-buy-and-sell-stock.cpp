class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int stock = INT_MAX,profit = 0;
        for(int i=0;i<n;i++){
            stock = min(stock,prices[i]);
            profit = max(profit,prices[i]-stock);
        }
        return profit;
    }
};