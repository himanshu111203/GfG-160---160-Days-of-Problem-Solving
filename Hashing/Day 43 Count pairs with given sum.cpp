class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int,int>m;
        int c=0;
        for(int i=0;i<arr.size();i++){
            if(m.find(target-arr[i])!=m.end())
            c+=m[target-arr[i]];
            m[arr[i]]++;
        }
        return c;
    }
};
