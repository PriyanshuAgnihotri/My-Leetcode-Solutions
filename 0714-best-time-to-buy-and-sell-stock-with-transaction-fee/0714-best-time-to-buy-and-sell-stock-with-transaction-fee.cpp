class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int sell=0;
        int p = prices.size();
        if(p<2)
        return 0;
        int buy = -prices[0];
        for(int i=1; i<p;i++){
            int Nbuy = max(buy, sell-prices[i]);
            int Nsell =max( sell, buy + prices[i] -fee);
            buy = Nbuy;
            sell=Nsell;
        }
        return sell;
    }
};