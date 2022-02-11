/*
	https://leetcode.com/problems/binary-search/
	Done
	11/2/2022
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i,left=0,right=nums.size()-1,mid;        
        if(nums[left]==target)
            return left;
        else if(nums[right]==target)
            return right;
        for(i=0;i<=log2(nums.size());i++)
        {
            mid=right-((right-left)/2);
            //cout<<left<<" "<<mid<<" "<<right<<"\n";
            if(target>nums[mid])
                left=mid;
            else if(target<nums[mid])
                right=mid;
            else if(target==nums[mid])
                return mid;               
        }        
        return -1;
    }
};