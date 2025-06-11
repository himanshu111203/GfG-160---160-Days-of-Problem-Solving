class Solution {
  public:
    int circularSubarraySum(vector<int> &arr) {
        // your code here
        int sum=0,totalsum=0,maxsum=INT_MIN,minisum=INT_MAX;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            totalsum+=arr[i];
            maxsum=max(maxsum,sum);
            if(sum<0)
            sum=0;
        }
        sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            minisum=min(minisum,sum);
            if(sum>0)
            sum=0;
        }
        return max(maxsum,totalsum-minisum);
    }
};
