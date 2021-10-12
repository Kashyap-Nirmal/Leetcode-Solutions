/*
	https://leetcode.com/problems/n-th-tribonacci-number/
	Done
	170921
*/
class Solution {
public:
    int tribonacci(int n) {
        int f0=1,f1=1,f2,i,t[38]={0};
        t[1]=1;
        t[2]=1;        
        for(i=3;i<=n;i++)
        {
            f2=f0+f1;
            f0=f1;        
            f1=f2; 
            if(i>=3)
                t[i]=t[i-3]+t[i-2]+t[i-1];            
        }         
        return t[n];
    }
};