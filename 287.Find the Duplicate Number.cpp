/*
	https://leetcode.com/problems/find-the-duplicate-number/
	Done
	220821
	Striver's list Day1
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> nums1=nums;
        int i=0;
        sort(nums1.begin(),nums1.end());
        for(i=1;i<nums1.size();i++)
            if(nums1[i]==nums1[i-1])
                break;
        return nums1[i];
    }
};