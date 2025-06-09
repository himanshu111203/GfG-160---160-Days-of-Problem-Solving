class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n=prices.size();
        int profit=0,maxi=0,mini=prices[0];
        for(int i=1;i<n;i++){
            mini=min(mini,prices[i]);
            profit=prices[i]-mini;
            if(profit>0)
            maxi=max(maxi,profit);
        }
        return maxi;
    }
};
