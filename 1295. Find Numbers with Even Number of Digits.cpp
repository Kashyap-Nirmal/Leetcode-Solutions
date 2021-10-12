/*	
	https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
	Done
	190921
*/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int i,cnt=0,ansCnt=0;
        for(i=0;i<nums.size();i++)
        {
            cnt=0;
            while(nums[i]!=0)
            {
                nums[i]/=10;
                cnt++;
            }
            if(cnt%2==0)
                ansCnt++;                            
        }
        return ansCnt;
    }
};