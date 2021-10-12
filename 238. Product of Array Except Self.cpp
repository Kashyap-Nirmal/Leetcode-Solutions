/*
	https://leetcode.com/problems/product-of-array-except-self/
	Done
	230921
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,flag=0;
        long long product=1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                product*=nums[i];
            else
                flag++;
        }
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0 && !flag)
                nums[i]=product/nums[i];
            else if(flag && nums[i]!=0)
                nums[i]=0;
            else if(nums[i]==0 && flag==1)
                nums[i]=product;            
        }        
        return nums;
    }
};