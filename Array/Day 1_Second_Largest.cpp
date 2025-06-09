class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxi=-1,maxi2=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxi){
                maxi2=maxi;
                maxi=arr[i];
            }
            else if(arr[i]>maxi2 && arr[i]!=maxi)
            maxi2=arr[i];
        }
        return maxi2;
    }
};
