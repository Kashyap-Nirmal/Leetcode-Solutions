/*
	https://leetcode.com/problems/longest-common-prefix/
	Done
	021021
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0,min_=200;
        string ans="";
        if(strs.size()==1)
            return strs[0];
        for(i=0;strs.size()>1 && i<strs.size();i++)
            min_=min(min_,(int)strs[i].size());
        for(i=0;strs.size()>1 && i<min_;i++)
        {
            for(int j=0;j<strs.size()-1;j++)
                if(strs[j][i]!=strs[j+1][i])
                    return ans;                    
            ans.push_back(strs[0][i]);                    
        }                    
        return ans;
    }    
};