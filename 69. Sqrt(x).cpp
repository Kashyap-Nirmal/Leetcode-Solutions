/*
	https://leetcode.com/problems/sqrtx/
	Done
	011021
*/
class Solution {
public:
    int mySqrt(int x) {
        long long i=0;
        bool flag=true;
        while(flag)
        {
            if(i*i==x)
                return i;
            else if(i*i>x)
                return --i;
            i++;
        }
        return 1;        
    }
};