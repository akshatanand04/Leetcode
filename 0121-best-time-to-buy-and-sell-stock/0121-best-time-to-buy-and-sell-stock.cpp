class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int totalprofit = 0 , currentprofit = 0;
        int mini = INT_MAX;
        int n = prices.size();
        for(int i=0;i<n;i++){
                if(prices[i]<mini){
                    mini = prices[i];
                }
             currentprofit = prices[i] - mini;
               if(currentprofit > totalprofit){
                 totalprofit = currentprofit;
                 }
        }

     return totalprofit;
         
    }
};

