class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rev(vector<int>&arr,int a,int b){
        while(a<b)
        swap(arr[a++],arr[b--]);
    }
    void rotateArr(vector<int>& arr, int d) {
        int n=arr.size();
        d%=n;
        rev(arr,0,d-1);
        rev(arr,d,n-1);
        rev(arr,0,n-1);
    }
};
