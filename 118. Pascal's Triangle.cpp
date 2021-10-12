/*
	https://leetcode.com/problems/pascals-triangle/
	240821
	Striver's SDE List Day 2
	Done
*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i,j,temp1;
        vector<vector<int>> ans;
        vector<int> temp;
        temp.push_back(1);
        ans.push_back(temp);
        temp.clear();
        for(i=1;i<numRows;i++)
        {
            temp1=0;
            temp.push_back(1);            
            for(j=1;j<i;j++)
            {
                //cout<<i<<" "<<j<<"\n";
                temp1=ans[i-1][j-1]+ans[i-1][j];                
                temp.push_back(temp1);    
            }
            temp.push_back(1);
            ans.push_back(temp);            
            temp.clear();
        }
        return ans;
    }
};