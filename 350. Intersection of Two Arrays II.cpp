/*
	https://leetcode.com/problems/intersection-of-two-arrays-ii/
	Done
	2/1/2022
*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i,j,arr1[1001]={0},arr2[1001]={0};
        for(i=0;i<nums1.size();i++)
            arr1[nums1[i]]++;
        for(i=0;i<nums2.size();i++)
            arr2[nums2[i]]++;
        for(i=0;i<1001;i++)
            for(j=0;j<min(arr1[i],arr2[i]) && arr1[i]!=0;j++)
                ans.push_back(i);
        return ans;
    }
};