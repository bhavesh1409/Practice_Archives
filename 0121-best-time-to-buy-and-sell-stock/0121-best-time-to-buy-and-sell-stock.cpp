class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        if(n == 1) return 0;

        vector<int> suff(n, INT_MIN);
        suff[n-1] = prices[n-1];

        for(int i=n-2; i>=0; i--)
        {
            suff[i] = max(prices[i], suff[i+1]);
        }


        int maxi = INT_MIN;
        for(int i=0; i<n; i++)
        {
            int currdiff = suff[i] - prices[i];

            maxi = max(maxi, currdiff);
        }        

        return maxi;

    }
};