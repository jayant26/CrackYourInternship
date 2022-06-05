class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)
        {
            return 0;
        }
        int  curr=prices[1]-prices[0] ,tempprofit=0,min=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(min<prices[i])
            {
                tempprofit=prices[i]-min;
                if(curr<tempprofit)
                {
                    curr=tempprofit;
                }
            }
            else
            {
                min=prices[i];
            }

        }
        if(curr<0)
            return 0;
        return curr;
    }
};
