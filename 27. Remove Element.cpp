/*
	https://leetcode.com/problems/remove-element/
	Done
	11/2/2022
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size()-1;
        for(;i<j;)
        {
            //cout<<i<<" "<<j<<"\n";
            if(nums[i]!=val)
                i++;
            if(nums[j]!=val)
            {
                if(nums[i]==val)
                {
                    swap(nums[i],nums[j]);
                    i++;
                    j--;
                }                                    
            }
            else
                j--;   
            /*
            for(int k=0;k<nums.size();k++)
                cout<<nums[k]<<" ";
            cout<<"\n";
            */
        }
        //cout<<i<<" "<<j<<"\n";
        for(i=0;i<nums.size() && nums[i]!=val;i++);            
        return i;
    }
};