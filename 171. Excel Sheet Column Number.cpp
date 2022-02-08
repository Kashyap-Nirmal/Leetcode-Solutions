/*
	https://leetcode.com/problems/excel-sheet-column-number/
	Done
	8/2/2022
*/
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int i,ans=0,size_=columnTitle.size()-1,j=0;
        for(i=size_;i>=0;i--,j++)
            ans = ans+pow(26,j)*abs(64-columnTitle[i]);
        return ans;
    }
};