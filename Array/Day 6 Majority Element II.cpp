class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int n=arr.size();
        int c1=0,c2=0,ele1=-1,ele2=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==ele1)
            c1++;
            else if(arr[i]==ele2)
            c2++;
            else if(c1==0){
                ele1=arr[i];
                c1++;
            }
            else if(c2==0){
                ele2=arr[i];
                c2++;
            }
            else
            c1--,c2--;
        }
        c1=0,c2=0;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==ele1)
            c1++;
            else if(arr[i]==ele2)
            c2++;
        }
        if(c1*3>n)
        ans.push_back(ele1);
        if(c2*3>n)
        ans.push_back(ele2);
        if(ans.size()==2 && ans[0]>ans[1])
        swap(ans[0],ans[1]);
        return ans;
    }
};
