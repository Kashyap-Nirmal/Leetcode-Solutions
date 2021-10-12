/*
	https://leetcode.com/problems/max-consecutive-ones/
	Done
	180921
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i,cnt=0,temp=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                cnt++;
            else
            {
                temp=max(temp,cnt);
                cnt=0;
            }                
        }
        temp=max(temp,cnt);
        return temp;
    }
};