/*
	https://leetcode.com/problems/search-insert-position/
	Done
	22/10/2021
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0,right=nums.size(),mid=left+(right-left)/2;
        for(int i=0;i<=log2(nums.size());i++)
        {
            mid=left+(right-left)/2;
            if(nums[mid]>target)
                right=mid;
            else if(nums[mid]<target)
                left=mid;
            else if(nums[mid]==target)
                return mid;            
        }
        if(target>nums[mid])
            mid++;
        return mid;        
    }
};