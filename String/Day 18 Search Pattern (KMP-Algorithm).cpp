class Solution {
  public:
   void findlps(vector<int>&lps,string s){
       int pre=0,suf=1;
       while(suf<s.size()){
           if(s[pre]==s[suf]){
               lps[suf]=pre+1;
               pre++,suf++;
           }
           else{
               if(pre==0)
               suf++;
               else
               pre=lps[pre-1];
           }
       }
   }
    vector<int> search(string& pat, string& txt) {
        // code here
        int n=txt.size(),m=pat.size();
        vector<int>lps(m,0);
        findlps(lps,pat);
        vector<int>ans;
        int a=0,b=0;
        while(a<n){
            if(txt[a]==pat[b])
            a++,b++;
            else{
                if(b==0)
                a++;
                else
                b=lps[b-1];
            }
            if(b==m)
            ans.push_back(a-b);
        }
        return ans;
    }
};
