class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=0;
        int profit=0;
        if(prices.size()==1){
            return 0;
        }else{
            for(int i=1;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }else{
                profit=prices[i]-min;
                if(profit>max){
                    max=profit;
                }
            }
        }
        }
        return max;
    }
};
