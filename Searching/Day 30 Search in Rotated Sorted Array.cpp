class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int start=0,end=arr.size()-1,mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==key)
            return mid;
            else if(arr[mid]>=arr[0]){
                if(arr[start]<=key && arr[mid]>key)
                end=mid-1;
                else 
                start=mid+1;
            }
            else{
                if(arr[mid]<key && arr[end]>=key)
                start=mid+1;
                else 
                end=mid-1;
            }
        }
        return -1;
    }
};
