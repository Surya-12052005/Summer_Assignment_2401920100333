// Best_Time_To_Buy_And_Sell_Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
                                  //INT_MAX is the maximum value an integer can hold.
        int minPrice = INT_MAX;   // Minimum price seen so far
        int maxProfit = 0;        // Maximum profit
        
        for(int i = 0; i < prices.size(); i++) {
            
            // Update minimum buying price
            minPrice = min(minPrice, prices[i]);
            
            // Calculate profit if sold today
            int profit = prices[i] - minPrice;
            
            // Update maximum profit
            maxProfit = max(maxProfit, profit);
        }
        
        return maxProfit;
    }
};