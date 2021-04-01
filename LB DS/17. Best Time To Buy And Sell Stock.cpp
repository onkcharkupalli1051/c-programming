// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
        
//         int buy=prices[0], bi = 0;
//         for(int i=1;i<n;i++)
//         {
//             if(buy > prices[i])
//             {
//                 buy = prices[i]; 
//                 bi = i;
//             }
//         }
        
//         int sell = prices[bi];
//         for(int j=bi+1;j<n;j++)
//         {
//             if(prices[j] > buy)
//             {
//                 sell = prices[j];
//             }
//         }
//         if(sell > buy) return (sell-buy);

//         if(sell == prices[bi])
//             return 0;
//     }
// };

class Solution{
    public int maxProfit(int[] prices)
    {
        int minprice = INT_MAX;
        int maxprofit = 0;
        for(int i=0;i<prices.length;i++)
        {
            if(prices[i] < minprice)
                minprice = prices[i];
            else if(prices[i]-minprice > maxprofit)
                maxprofit = prices[i] - minprice;
        }
        return maxprofit;
    }
}