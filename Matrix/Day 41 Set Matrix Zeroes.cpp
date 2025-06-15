class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int n=mat.size(),m=mat[0].size();
        int c=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    
                    //mark ith row
                    mat[i][0]=0;
                    
                    //mark jth col
                    if(j==0)
                    c=0;
                    else
                    mat[0][j]=0;
                }
            }
        }
        // traverse from (1,1) to (n-1,m-1)
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                //check for row and col
                if(mat[i][0]==0 || mat[0][j]==0)
                mat[i][j]=0;
            }
        }
        //mark the first row
        if(mat[0][0]==0){
            for(int j=0;j<m;j++)
            mat[0][j]=0;
        }
        //mark the first col
        if(c==0){
            for(int i=0;i<n;i++)
            mat[i][0]=0;
        }
    }
};
