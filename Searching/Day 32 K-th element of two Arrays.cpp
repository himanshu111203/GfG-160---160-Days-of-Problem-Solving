class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int n=a.size(),m=b.size(),i=0,j=0;
        if(k==n+m)
        return max(a[n-1],b[m-1]);
        if(k==1)
        return min(a[0],b[0]);
        while(i<n && j<m && k>1){
            if(a[i]<=b[j])
            i++,k--;
            else
            j++,k--;
        }
        while(i<n && k>1){
            i++,k--;
        }
        while(j<m && k>1){
            j++,k--;
        }
        if(i==n) return b[j];
        else if(j==m) return a[i];
        else return min(a[i],b[j]);
    }
};
