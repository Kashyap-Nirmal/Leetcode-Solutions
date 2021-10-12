/*
	https://leetcode.com/problems/sort-colors/
	220821
	Done
	Striver's list Day1
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,cnt0=0,cnt1=0,cnt2=0,j=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                cnt0++;
            else if(nums[i]==1)
                cnt1++;
            else
                cnt2++;
        }
        j=0;
        for(i=0;i<nums.size();i++)
        {
            if(i==cnt0)                
                j++;
            if(i==cnt0+cnt1)
                j++;
            nums[i]=j;
        }        
    }
};