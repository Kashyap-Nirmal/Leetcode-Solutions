/*
	https://leetcode.com/problems/reshape-the-matrix/
	Done
	101021
*/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();       
        int i,j,k=0,l=0;
        if(m*n!=r*c)
            return mat;
        vector<vector<int>> ans(r,vector<int>(c));
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++,l++)
            {
                ans[k][l]=mat[i][j];
                if(l==c-1)
                {
                    l=-1;
                    k++;
                }                    
                //cout<<i<<" "<<j<<" "<<k<<" "<<l<<"\n";
            }
        }
        return ans;
    }
};