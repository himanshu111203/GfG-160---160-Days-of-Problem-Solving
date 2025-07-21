class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        // Your code here
        stack<int>s;
        int n=arr.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[i]<arr[s.top()]){          // NSR present
                int ind=s.top();
                s.pop();
                if(s.empty()){                                 // NSL not present
                    int range=i;
                    ans[range-1]=max(ans[range-1],arr[ind]);
                } 
                else{                                          // NSL present 
                    int range =i-s.top()-1;
                    ans[range-1]=max(ans[range-1],arr[ind]);
                }
            }
            s.push(i);
        }
        while(!s.empty()){                                      // NSR not present
            int ind=s.top();
            s.pop();
            if(s.empty()){                                      // NSL not present
                int range=n;
                ans[range-1]=max(ans[range-1],arr[ind]);
            }
            else{                                                // NSL present
                int range =n-s.top()-1;
                ans[range-1]=max(ans[range-1],arr[ind]);
            }
        }
        for(int i=n-2;i>=0;i--){
            ans[i]=max(ans[i],ans[i+1]);
        }
        return ans;
    }
};
