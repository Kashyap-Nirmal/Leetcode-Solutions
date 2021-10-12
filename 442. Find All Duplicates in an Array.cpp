/*
	https://leetcode.com/problems/find-all-duplicates-in-an-array/
	Done
	071021
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i,cnt[100001]={0};
        vector<int> ans;
        for(i=0;i<nums.size();i++)
        {
            cnt[nums[i]]++;
        }
        for(i=1;i<=nums.size();i++)
        {
            if(cnt[i]>=2)
            {
                ans.push_back(i);
            }            
        }
        return ans;
    }
};