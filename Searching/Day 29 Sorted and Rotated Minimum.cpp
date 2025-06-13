class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int start=0,end=arr.size()-1,mid,ans=arr[0];
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]>=arr[0])
            start=mid+1;
            else{
                ans=arr[mid];
                end=mid-1;
            }
        }
        return ans;
    }
};
