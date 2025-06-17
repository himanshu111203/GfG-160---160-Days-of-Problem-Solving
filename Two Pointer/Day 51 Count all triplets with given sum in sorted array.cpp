class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        int ans=0,n=arr.size();
        for(int i=0;i<n-2;i++){
            int a=i+1,b=n-1;
            while(a<b){
                if(arr[i]+arr[a]+arr[b]==target){
                    ans++;
                    int temp=a+1;
                    while(temp<b && arr[temp]==arr[temp-1])
                    ans++,temp++;
                    b--;
                }
                else if(arr[i]+arr[a]+arr[b]<target)
                a++;
                else
                b--;
            }
        }
        return ans;
    }
};
