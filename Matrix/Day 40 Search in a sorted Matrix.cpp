class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n=mat.size(),m=mat[0].size();
        int start=0,end=n*m-1,mid;
        while(start<=end){
            mid=start+(end-start)/2;
            int i=mid/m,j=mid%m;
            if(mat[i][j]==x)
            return 1;
            else if(mat[i][j]<x)
            start=mid+1;
            else 
            end=mid-1;
        }
        return 0;
    }
};
