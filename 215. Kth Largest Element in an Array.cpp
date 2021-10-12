/*
	https://leetcode.com/problems/kth-largest-element-in-an-array/
	Done
	230921
*/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int i,j,max_;
        for(i=0;i<k;i++)            
        {
            max_=*max_element(nums.begin(),nums.end());            
            for(j=0;i!=k-1 && j<nums.size();j++)
            {
                if(nums[j]==max_)
                {
                    nums[j]=-10001;
                    break;
                }                    
            }
        }
        return max_;
    }
};