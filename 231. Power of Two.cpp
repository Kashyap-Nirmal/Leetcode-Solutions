/*
	https://leetcode.com/problems/power-of-two/
	Done
	290921
*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool ans=false;
        if(n>0 && (log2(n)-(int)log2(n))==0)
            ans=true;
        return ans;
    }
};