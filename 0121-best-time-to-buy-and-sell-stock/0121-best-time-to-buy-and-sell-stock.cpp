class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mini = prices[0];
        for(int i=1; i<prices.size(); i++){
            int sellPrice = prices[i] - mini;
            profit = max(profit, sellPrice);
            mini = min(mini, prices[i]);
        }
        return profit;
    }
};