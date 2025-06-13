class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        vector<int>c(3,0);
        for(int i:arr)
        c[i]++;
        int j=0;
        for(int i=0;i<3;i++){
            while(c[i]){
                arr[j]=i;
                c[i]--;
                j++;
            }
        }
    }
};
