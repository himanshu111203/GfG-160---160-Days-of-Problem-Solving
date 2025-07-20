class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        // Your code here
        int ans=INT_MIN;
        int n=arr.size();
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[i]<arr[s.top()]){
                int temp=arr[s.top()];
                s.pop();
                if(s.empty())
                ans=max(ans,temp*(i));
                else
                ans=max(ans,temp*(i-s.top()-1));
            }
            s.push(i);
        }
        while(!s.empty()){
            int temp=arr[s.top()];
            s.pop();
            if(s.empty())
            ans=max(ans,temp*(n));
            else
            ans=max(ans,temp*(n-s.top()-1));
        }
        return ans;
    }
};
