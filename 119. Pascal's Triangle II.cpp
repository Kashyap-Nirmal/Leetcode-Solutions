/*
	https://leetcode.com/problems/pascals-triangle-ii/
	Done
	220921
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int i,j;
        vector<int>temp(rowIndex+1,0);
        vector<int>temp1(rowIndex+1,0);
        for(i=0;i<=rowIndex;i++)
        {            
            temp[0]=1; 
            temp1[0]=1;
            for(j=1;j<i;j++)
                temp[j]=temp1[j-1]+temp1[j];                                   
            temp[i]=1;            
            for(j=0;j<=i;j++)
                temp1[j]=temp[j];         
        }
        return temp;
    }
};