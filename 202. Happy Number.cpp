/*
	https://leetcode.com/problems/happy-number/
	Done
	180921
*/
class Solution {
public:
    bool isHappy(int n) {
        int i=0,temp=n,sum=0,iter;
        bool ans=false;
        for(int i=0;i<31 && sum!=1;i++)
        {
            sum=0;
            iter=log(temp);
            for(int i=0;i<=iter;i++)
            {
                sum+=pow(temp%10,2);
                temp/=10;                
            }
            temp=sum;
        }
        if(sum==1)
            ans=true;
        return ans;
    }
};