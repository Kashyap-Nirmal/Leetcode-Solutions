/*	
	https://leetcode.com/problems/fizz-buzz/
	Done
	170921
*/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        int i;
        for(i=1;i<=n;i++)
        {
            if(i%15==0)
                ans[i-1]="FizzBuzz";
            else if(i%3==0)
                ans[i-1]="Fizz";
            else if(i%5==0)
                ans[i-1]="Buzz";
            else
                ans[i-1]=to_string(i);                            
        }
        return ans;
    }
};