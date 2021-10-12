/*
	https://leetcode.com/problems/power-of-four/
	Done
	290921
*/
class Solution {
public:
    bool isPowerOfFour(int n) {
        bool ans=false;
        if(n>0 && (log(n)/log(4)-(int)(log(n)/log(4)))==0)
            ans=true;
        return ans;
    }
};