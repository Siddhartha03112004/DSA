class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int profit =  0;
        int maxProfit = 0;

        int n  = prices.size();

        for(int  i = 0 ; i < n ; i++) {
            profit =   prices[i] - minPrice;
        

        maxProfit = max( profit, maxProfit);

        if( prices[i] < minPrice) {
            minPrice = prices[i];
        }
      }

      return maxProfit; 
    }
};