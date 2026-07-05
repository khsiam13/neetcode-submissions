class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int profit = 0;
        for(auto price : prices) {
            if(price < min_price) min_price = price;
            else profit = max(profit, price - min_price);
        }
        return profit;
    }
};
