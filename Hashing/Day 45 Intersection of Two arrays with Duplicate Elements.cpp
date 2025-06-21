class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int>m;
        vector<int>ans;
        int n=a.size(),p=b.size();
        for(int i=0;i<p;i++){
            m[b[i]]++;
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(i>0 && a[i]==a[i-1])
            continue;
            else if(m.find(a[i])!=m.end())
            ans.push_back(a[i]);
        }
        return ans;
    }
};
