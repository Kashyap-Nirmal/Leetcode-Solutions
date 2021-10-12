/*
	https://leetcode.com/problems/maximum-subarray/
	240821
	Kadane's algorithm (O(N) soln.). Max sum subarray.
	Solution. Youtube
	O(N^3) to O(N^2) to O(N).
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0,max_=nums[0],sum=0;
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];  
            max_=max(max_,sum);
            sum=max(0,sum);
        }
        return max_;
    }
};