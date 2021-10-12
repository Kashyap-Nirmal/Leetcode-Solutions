/*
	https://leetcode.com/problems/move-zeroes/
	Done
	230921
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0,cnt0=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                cnt0++;                
            else
            {                
                nums[cnt]=nums[i];//swap(nums[i],nums[cnt]);[Increases Running time?]
                cnt++;
            }
        }
        for(int i=cnt;i<nums.size();i++)        
            nums[i]=0;
    }
};