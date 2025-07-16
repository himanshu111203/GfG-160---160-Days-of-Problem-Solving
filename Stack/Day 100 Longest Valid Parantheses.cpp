class Solution {
  public:
    int maxLength(string& s) {
        // code here
        stack<int>st;
        st.push(-1);
        int i=0,n=s.size();
        while(i<n){
            if(s[i]=='(')
            st.push(i);
            else{
                if(st.top()==-1)
                st.push(i);
                else if(s[st.top()]=='(')
                st.pop();
                else 
                st.push(i);
            }
            i++;
        }
        if(st.top()==-1)
        return n;
        int ans=0,a=n;
        while(!st.empty()){
            ans=max(ans,a-st.top()-1);
            a=st.top();
            st.pop();
        }
        return ans;
    }
};
