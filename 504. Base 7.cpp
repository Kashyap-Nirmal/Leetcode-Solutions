/*
	https://leetcode.com/problems/base-7/
	Done
	071021
*/
class Solution {
public:
    string convertToBase7(int num) {
        int i,temp;
        string ans="";
        if(num==0)
            return "0";
        bool flag=false;
        if(num<0)
        {
            flag=true;            
            num*=-1;
        }
        while(num!=0)
        {
            
            temp=num%7;
            ans.push_back(48+temp);
            num/=7;            
        }
        if(flag)
            ans.push_back('-');        
        reverse(ans.begin(), ans.end());                
        return ans;
    }
};