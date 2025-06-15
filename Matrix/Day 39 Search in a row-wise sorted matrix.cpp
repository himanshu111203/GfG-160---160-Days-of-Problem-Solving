class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++){
            if(x>=mat[i][0] && x<=mat[i][m-1]){
                int start=0,end=m-1,mid;
                while(start<=end){
                    mid=start+(end-start)/2;
                    if(mat[i][mid]==x)
                    return 1;
                    else if(mat[i][mid]<x)
                    start=mid+1;
                    else 
                    end=mid-1;
                }
            }
        }
        return 0;
    }
};
