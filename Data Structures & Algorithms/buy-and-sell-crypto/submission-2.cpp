class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;

        if (prices.size() < 2) {
            return 0;
        }        

        int buyPrice = prices[0];

        for (auto i = 1; i < prices.size(); ++i) {
            result = std::max(result, prices[i] - buyPrice);
            buyPrice = std::min(buyPrice, prices[i]);
        }

        return result;
    }
};
