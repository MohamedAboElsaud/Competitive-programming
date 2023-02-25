class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(),diff = 0, x = 1e9, i = 0;
        while (i < n) {
            x = min(x, prices[i]);
            if (prices[i] >= x)
                diff = max(diff, prices[i] - x);
            i++;
        }
        return diff;
    }
};