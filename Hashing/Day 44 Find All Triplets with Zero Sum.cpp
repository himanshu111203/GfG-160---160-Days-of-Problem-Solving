class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>m;
        int n=arr.size();
        for(int j=0;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                int val=-1*(arr[j]+arr[k]);
                if(m.find(val)!=m.end()){
                    for(auto i:m[val]){
                        ans.push_back({i,j,k});
                    }
                }
            }
            m[arr[j]].push_back(j);
        }
        return ans;
    }
};
