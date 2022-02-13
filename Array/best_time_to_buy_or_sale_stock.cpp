class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_no = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            //max_profit= max(max_profit,prices[i]-min_no);

            min_no = min(min_no, prices[i]);
            max_profit = max(max_profit, prices[i] - min_no);
        }
        return max_profit;
    }
};