class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int maxprofit=0;
        
        for(int i =1;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
      
        else {
            int currentProfit = prices[i]-min;
            if(currentProfit>maxprofit){
                maxprofit = currentProfit;
            }
        }   }
        return maxprofit;
        
    }
};
