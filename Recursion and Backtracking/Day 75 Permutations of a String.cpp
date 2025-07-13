class Solution {
  public:
    void find(string &s,vector<string>&ans,int ind){
        if(ind==s.size()){
            ans.push_back(s);
            return;
        }
        vector<bool>use(26,0);
        for(int i=ind;i<s.size();i++){
            if(use[s[i]-'A']==0){
                swap(s[i],s[ind]);
                find(s,ans,ind+1);
                swap(s[i],s[ind]);
                use[s[i]-'A']=1;
            }
        }
    }
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string>ans;
        find(s,ans,0);
        return ans;
    }
};
