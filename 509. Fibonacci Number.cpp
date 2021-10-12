/*
	https://leetcode.com/problems/fibonacci-number/
	Done
	170921
*/
class Solution {
public:
    
    int fib(int n) {
        int f0=-1,f1=1,f2;
        for(int i=0;i<=n;i++)
        {
            f2=f0+f1;
            f0=f1;        
            f1=f2;        
        }
        return f2;
    }
};