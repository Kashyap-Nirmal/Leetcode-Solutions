/*
	https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
	Done
	081021
*/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int cnt[100001]={0},i;   
        vector<int> ans;
        for(i=1;i<=nums.size();i++)
        {
            cnt[nums[i-1]]=1;
        }
        for(i=1;i<=nums.size();i++)
        {
            if(cnt[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};