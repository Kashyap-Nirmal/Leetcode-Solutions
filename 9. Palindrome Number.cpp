/*
	https://leetcode.com/problems/palindrome-number/
	Done
	200921
*/
class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0,temp=x,cnt=-1;
        bool ans=false;
        if(x<0)
            return false;        
        while(temp!=0)
        {
            temp/=10;
            cnt++;            
        }   
        temp=x;
        for(int i=cnt;temp!=0;i--)
        {
            rev+=(long long)pow(10,i)*(temp%10);
            temp/=10;            
        }        
        if(rev==x)
            ans=true;
        return ans;
    }
};