/*
	https://leetcode.com/problems/power-of-three/
	Soln. Bhavin's soln
	011021
*/
class Solution {
public:
    bool isPowerOfThree(int n) {        
        bool ans=false;
        int i=0;
        if(n<1)
            return false;
        while(n!=1)
        {
            if(n>2 && n%3==0)
                n/=3; 
            else
                return false;            
        }
        return true;        
        /*
            Fails 
            TC - 21033 / 21038
            
            bool ans=false;
            if(n>0 && (log(n)/log(3)-(int)(log(n)/log(3)))==0)
                ans=true;
            return ans;
        
        */
    }
};