/*
	https://leetcode.com/problems/convert-1d-array-into-2d-array/
	Done	
	071021
*/
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ans(m,vector<int> (n, 0));
        int i,j;
        if(m*n < original.size() || m*n>original.size())
        {
            return {};
        }        
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                ans[i][j]=original[(i*n)+j];   
            }            
        } 
        return ans;
    }
};