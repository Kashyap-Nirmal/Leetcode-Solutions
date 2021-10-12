/*
	https://leetcode.com/problems/rotate-array/
	Soln. 02nd Oct session
	031021
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.begin()+k);        
    }
};