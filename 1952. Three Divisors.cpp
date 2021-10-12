/*
	https://leetcode.com/problems/three-divisors/
	Done
	170921
*/
class Solution {
public:
    bool isThree(int n) {
        int i=0,cnt=0;
        bool ans=false;
        if(n<=2)
            return false;
        for(i=2;cnt<=1 && i<n;i++)
        {
            if(n%i==0)
                cnt++;
        }
        if(cnt==1)
            ans=true;
        return ans;
    }
};