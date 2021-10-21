/*
	https://leetcode.com/problems/perfect-number/
	Done
	21/10/2021
*/
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i,sum=1;
        bool ans=false;
        for(i=2;i<=sqrt(num) && sum<=num;i++)
        {
            if(num%i==0)
            {
                sum+=i;            
                sum+=num/i;
            }                
        }        
        if(sum==num && num!=1) 
            ans=true;
        return ans;
    }
};