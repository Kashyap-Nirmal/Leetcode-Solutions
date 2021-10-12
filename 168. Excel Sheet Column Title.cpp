/*
	https://leetcode.com/problems/excel-sheet-column-title/
	Done
	290921
*/
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        int i,n=ceil(log(columnNumber)/log(26)*1.0);;
        if(columnNumber>=26*26)
            n=ceil(log(columnNumber-26)/log(26)*1.0);            
        ans.resize(max(1,n));              
        if(columnNumber%26==0)
        {
            ans[n-1]='Z';
            columnNumber-=26;            
            for(i=n-1;i>0;i--)
            {
                //cout<<i<<" "<<i-1<<" "<<(char)(columnNumber/26+64)<<"\n";
                ans[i-1]=(char)(columnNumber/26+64);            
                columnNumber=columnNumber/26;                                    
            }    
        }        
        else
        {
            for(i=n;i>1;i--)
            {
                ans[i-1]=(char)(columnNumber%26+64);            
                columnNumber=columnNumber/26;                                    
            }
            ans[0]=(char)(columnNumber+64);    
        }        
        return ans;
    }
};