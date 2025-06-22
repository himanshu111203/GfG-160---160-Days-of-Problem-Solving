class Solution {
  public:
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int>m;
        int p=a.size(),q=b.size();
        int ans=0;
        for(int i=0;i<p;i++){
            m[a[i]]++;
            if(m[a[i]]==1)
            ans++;
        }
        for(int i=0;i<q;i++){
            m[b[i]]++;
            if(m[b[i]]==1)
            ans++;
        }
        return ans;
    }
};
