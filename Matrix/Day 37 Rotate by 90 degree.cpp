class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        // Transpose Matrix
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<m;j++){
                swap(mat[i][j],mat[j][i]);
            }
        } 
        // swap every row
        for(int j=0;j<m;j++){
            int a=0,b=n-1;
            while(a<b)
            swap(mat[a++][j],mat[b--][j]);
        }
    }
};
