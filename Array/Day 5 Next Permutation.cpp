class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int i,m=-1;
        for(i=arr.size()-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                m=i;
                break;
            }
        }
        if(i<0){
            reverse(arr.begin(),arr.end());
            return;
        }
        int n=-1,ele=INT_MAX;
        for(i=m;i<arr.size();i++){
            if(arr[i]>arr[m] && arr[i]<ele){
                ele=arr[i];
                n=i;
            }
        }
        swap(arr[m],arr[n]);
        m=m+1;
        n=arr.size()-1;
        while(m<n)
        swap(arr[m++],arr[n--]);
    }
};
