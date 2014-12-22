class Solution {
public:
    int maxProfit(vector<int> &prices) {
       
        int profit=0;
        bool buyOrSell=true;
        int i;
        if(prices.size()<2)
            return 0;
        if(prices[0]<prices[1])
        {
            buyOrSell=false;
            profit-=prices[0];
        }
        for(i=1;i<prices.size()-1;i++)
        {
            if(buyOrSell&&prices[i]<=prices[i-1]&&prices[i]<=prices[i+1])
            {
                profit-=prices[i];
                buyOrSell=false;
                continue;
            }
            if(!buyOrSell&&prices[i]>=prices[i-1]&&prices[i]>=prices[i+1])
            {
                profit+=prices[i];
                buyOrSell=true;
                continue;
            }
        }
        if(!buyOrSell)
         profit+=prices[i];
          return profit;
    }
   
};