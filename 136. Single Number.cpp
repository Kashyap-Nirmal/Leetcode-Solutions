/*
	https://leetcode.com/problems/single-number/
	Done
	021021
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i;    
        sort(nums.begin(),nums.end());
        for(i=0;nums.size()>1 && i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
                i++;
            else 
                break;
        }        
        return nums[i];
    }
};