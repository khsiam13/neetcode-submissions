class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
                int min_price = INT_MAX; // Track the lowest buying price seen so far
                        int max_profit = 0;      // Track the maximum profit possible
                                
                                        for (int price : prices) {
                                                    if (price < min_price) {
                                                                    min_price = price; // Found a cheaper day to buy
                                                                                } else {
                                                                                                // Check if selling today beats our previous best profit
                                                                                                                max_profit = std::max(max_profit, price - min_price);
                                                                                                                            }
                                                                                                                                    }
                                                                                                                                            
                                                                                                                                                    return max_profit;
                                                                                                                                                        }
    };
