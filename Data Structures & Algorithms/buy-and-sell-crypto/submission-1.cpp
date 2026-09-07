class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_Value = prices[0];
        int max_profit = 0;
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            profit = prices[i] - min_Value;
            min_Value = min(min_Value, prices[i]);
            max_profit = max(max_profit, profit);
        }
        return max_profit;
    }
};
