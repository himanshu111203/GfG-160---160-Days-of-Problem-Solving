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
    int minChar(string& s) {
        // Write your code here
        int n=s.size();
        string rev=s;
        reverse(rev.begin(),rev.end());
        s+='$';
        s+=rev;
        vector<int>lps(s.size(),0);
        findlps(lps,s);
        return n-lps[s.size()-1];
    }
};
