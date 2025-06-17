class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_set<int>s;
        for(int i=0;i<arr.size();i++){
            int comp=target-arr[i];
            if(s.find(comp)!=s.end())
            return 1;
            s.insert(arr[i]);
        }
        return 0;
    }
};
