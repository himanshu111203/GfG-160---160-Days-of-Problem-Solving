class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int j=0;
        for(int i=0;i<arr.size();i++){
            if(j<i && arr[i]!=0){
                swap(arr[j],arr[i]);
                j++;
            }
            if(arr[j]!=0)
            j++;
        }
        
    }
};
