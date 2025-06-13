class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int ans=0;
        for(int i:arr){
            if(i==target)
            ans++;
        }
        return ans;
    }
};
