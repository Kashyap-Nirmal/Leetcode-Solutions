/*
	https://leetcode.com/problems/set-matrix-zeroes/
	230821
	Done
	Striver's List Day 2
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j,ir=0;
        vector<int> rows;
        vector<int> cols;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[0].size();j++)
                if(!matrix[i][j])
                {
                    rows.push_back(i);
                    cols.push_back(j);
                }                                    
        }
        for(ir=0;ir<rows.size();ir++)
        {
            for(j=0;j<matrix[0].size();j++)                
            {                
                matrix[rows[ir]][j]=0;
            }
            for(i=0;i<matrix.size();i++)                
            {                
                matrix[i][cols[ir]]=0;
            }             
        }
    }
};