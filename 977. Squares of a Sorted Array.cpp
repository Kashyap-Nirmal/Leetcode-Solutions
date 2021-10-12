/*
	https://leetcode.com/problems/squares-of-a-sorted-array/submissions/
	Done
	180921
*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size();i++)
            nums[i]*=nums[i];
        sort(nums.begin(),nums.end());
        return nums;
    }
};