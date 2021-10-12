/*
	https://leetcode.com/problems/find-greatest-common-divisor-of-array/
	Done
	160921
*/
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end());
        int n=*min_element(nums.begin(),nums.end());
        return __gcd(m, n);   
    }
};