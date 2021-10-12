/*
	https://leetcode.com/problems/intersection-of-two-arrays/
	Done
	180921
*/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v1(1001,0),v2(1001,0),ans;
        int i,min_=min(nums1.size(),nums2.size());
        for(i=0;i<min_;i++)
        {
            v1[nums1[i]]=1;
            v2[nums2[i]]=1;
        }               
        if(nums1.size()>i)
            for(;i<nums1.size();i++)
                v1[nums1[i]]=1;
        else
            for(;i<nums2.size();i++)
                v2[nums2[i]]=1;
        for(i=0;i<1001;i++)
        {
            if(v1[i]==v2[i] && v1[i]==1)
                ans.push_back(i);
        }
        return ans;
    }
};