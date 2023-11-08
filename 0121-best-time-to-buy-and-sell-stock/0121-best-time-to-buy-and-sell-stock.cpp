class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // idea : iterate through the given arr , strt point and increament till the we are rthe grter ele
        
        int profit = 0, mx_profit = 0;
        int strt_pt = prices[0];
        for (int i=0; i<prices.size(); i++)
        {
            if (prices[i] > strt_pt)
            {
                profit = prices[i] - strt_pt;
                mx_profit = max (profit , mx_profit);
                continue;
            }
            strt_pt = prices[i];
        }
        if (mx_profit == 0) return 0;
        
        return mx_profit;
    }
};