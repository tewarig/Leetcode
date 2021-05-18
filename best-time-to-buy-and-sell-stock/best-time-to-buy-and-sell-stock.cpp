class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       int max = 0;
       int maxi = INT_MAX;
        int n = prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]<maxi)
            {
                maxi = prices[i];
            }
            int k = prices[i] - maxi;
            if(max<k)
            {
             max = k;   
            }
        }
        return max;
        
    }
};