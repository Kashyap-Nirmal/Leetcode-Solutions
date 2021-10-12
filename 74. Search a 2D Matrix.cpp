/*
	https://leetcode.com/problems/search-a-2d-matrix/
	040921
	Striver's Day 3
	Done
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left=0,right,mid,cnt=0,i=0,j=0,total_size;
        bool flag=false;        
        total_size=matrix.size()*matrix[0].size();        
        right=total_size;
        mid=(left+right)/2;        
        for(;cnt<=log2(total_size);cnt++)
        {
            i=mid/matrix[0].size();
            j=mid%matrix[0].size();
            if(target==matrix[i][j])
            {
                flag=true;
                break;
            }
            else if(target<matrix[i][j])
                right=mid;
            else if(target>matrix[i][j])
                left=mid;
            mid=(left+right)/2;            
        }
        return flag; 
    }
};