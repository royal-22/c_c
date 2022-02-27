/*int maxProfit(int* prices, int pricesSize){
    int profit = 0;
    int latest_low=-1, latest_high=0;
    
    for(int i=0; i<pricesSize; i++) {
        if(prices[i] > latest_high) {
            latest_high = prices[i];
        }
        if(prices[i] < latest_low || latest_low==-1) {
            latest_low = prices[i];
            if(latest_high > latest_low)
                latest_high = latest_low;
        }
        if(latest_high - latest_low > 0) {
            profit += latest_high-latest_low;
            latest_low = latest_high;
        }
    }
    
    return profit;
}*/

int maxProfit(int* prices, int pricesSize){
    int maxprofit = 0, i;
    
    for (i=1; i<pricesSize; i++){
        if (prices[i] > prices[i-1]){
            maxprofit += prices[i] - prices[i-1];
        }
    }
    return maxprofit;
}
