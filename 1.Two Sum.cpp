/*
	https://leetcode.com/problems/two-sum/submissions/
	060921
	Runtime: 8 ms, faster than 94.87% of C++ online submissions for Two Sum.
	Memory Usage: 10.3 MB, less than 65.94% of C++ online submissions for Two Sum.
	Done	
*/
/*
	Logic:
	1)Sort.
	2)Binary search in sorted vector vec1[i] & target-vec1[i].
	3)Linear search for the index of these two numbers in original vector.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec1 = nums;
        sort(vec1.begin(),vec1.end());
        int i,j,n=nums.size();
        vector<int> vec;
        std::vector<int>::iterator it;
        for(i=0;i<n;i++)
        {
            if(binary_search(vec1.begin(),vec1.end(),target-vec1[i]))
            {
                /*
                    M-2
                it=find(nums.begin(),nums.end(),vec1[i]);
                vec.push_back(it - nums.begin());
                it=find(nums.begin(),nums.end(),target-vec1[i]);
                if(it==find(nums.begin(),nums.end(),vec1[i]))
                    it=find(it+1,nums.end(),target-vec1[i]);
                vec.push_back(it - nums.begin());
                return vec;
                */
                    break
            }                
        }
        j=vec1[i];
        for(i=0;i<n;i++)
        {
            if(j==nums[i])
                vec.push_back(i);
            else if(target-j==nums[i])
                vec.push_back(i);                            
        }
        return vec;
    }
};