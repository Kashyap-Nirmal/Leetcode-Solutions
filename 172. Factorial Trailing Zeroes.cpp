/*
	https://leetcode.com/problems/factorial-trailing-zeroes/
	Done
	190921
*/
class Solution {
public:
    int trailingZeroes(int n) {
        int i,sum=0;
        for(i=1;pow(5,i)<=n;i++)
            sum+=n/pow(5,i);
        return sum;
    }
};