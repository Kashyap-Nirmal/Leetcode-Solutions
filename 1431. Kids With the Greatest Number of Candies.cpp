/*
	https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
	Done
	21/10/2021
*/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size(),false);
        int i;
        int max_=*max_element(candies.begin(),candies.end());
        for(i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max_)
                ans[i]=true;                            
        }
        return ans;
    }
};