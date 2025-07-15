class Solution {
  public:
    bool isBalanced(string& k) {
        // code here
        stack<char>s;
        int i=0,n=k.size();
        while(i<n){
            if(k[i]=='(' || k[i]=='[' || k[i]=='{')
            s.push(k[i]);
            else if(k[i]==')'){
                if(s.empty())
                return 0;
                if(s.top()=='(')
                s.pop();
                else
                return 0;
            }
            else if(k[i]==']'){
                if(s.empty())
                return 0;
                if(s.top()=='[')
                s.pop();
                else
                return 0;
            }
            else{
                if(s.empty())
                return 0;
                if(s.top()=='{')
                s.pop();
                else
                return 0;
            }
            i++;
        }
        return s.empty();
    }
};
