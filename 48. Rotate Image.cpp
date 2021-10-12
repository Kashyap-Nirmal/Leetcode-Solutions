/*
	https://leetcode.com/problems/rotate-image/
	010921
	Striver's SDE Sheet Day 2
	YT Solution
	Logic: Transpose then Rotate row by row.
*/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j,temp,oi,oj,diff=matrix.size();        
        bool flag=false;
        for(i=0;i<diff;i++)
            for(j=0;j<i;j++)
               swap(matrix[i][j],matrix[j][i]);                                           
        for(i=0;i<diff;i++)
            reverse(matrix[i].begin(),matrix[i].end());
    }
};