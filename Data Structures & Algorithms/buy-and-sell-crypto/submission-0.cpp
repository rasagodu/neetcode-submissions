class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_Value= prices[prices.size()-1];
        int profit =0;
        int max_profit = 0;
        for(int i = prices.size()-2;i>=0;i--){
            profit = max_Value - prices[i];
            max_Value = max( prices[i] , max_Value);
            max_profit = max(profit, max_profit);
        }
        return max_profit;
    }
};
