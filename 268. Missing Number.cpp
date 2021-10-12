/*
	https://leetcode.com/problems/missing-number/
	Done
	170921
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size_=nums.size(),sum=(size_*(size_+1))/2;
        int sum1=accumulate(nums.begin(), nums.end(), 0);
        return sum-sum1;
    }
};