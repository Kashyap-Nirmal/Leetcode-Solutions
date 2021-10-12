/*
	https://leetcode.com/problems/remove-duplicates-from-sorted-array/
	Done
	170921
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,cnt=0;
        if(nums.size()==0)
            return 0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[cnt]!=nums[i])
            {
                cnt++;
                nums[cnt]=nums[i];
            }                
        }        
        return cnt+1;
    }
};