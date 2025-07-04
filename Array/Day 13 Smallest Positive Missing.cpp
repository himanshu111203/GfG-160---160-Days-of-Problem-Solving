//Using Cycle sort
class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            while(arr[i]>=1 && arr[i]<n && arr[arr[i]-1]!=arr[i])
            swap(arr[arr[i]-1],arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1)
            return i+1;
        }
        return n+1;
    }
};
