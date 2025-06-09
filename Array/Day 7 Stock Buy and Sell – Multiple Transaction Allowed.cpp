//Check between every element and if previous is smaller the curr then add there difference in profit
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int ans=0,n=prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                ans+=prices[i]-prices[i-1];
            }
        }
        return ans;
    }
};

// Find local minima and local maxima and then add there difference in profit
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int ans=0,n=prices.size();
        int i=0,mini=prices[0],maxi=prices[0];
        while(i<n-1){
            while(i<n-1 && prices[i]>=prices[i+1]){
                i++;
            }
            mini=prices[i];
            while(i<n-1 && prices[i]<prices[i+1]){
                i++;
            }
            maxi=prices[i];
            ans+=maxi-mini;
        }
        return ans;
    }
};
