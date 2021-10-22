/*
	https://leetcode.com/problems/is-subsequence/
	Done
	22/10/2021
*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool ans=false;
        int i,j=0;
        for(i=0;i<t.size();i++)
        {
            if(t[i]==s[j])
                j++;
            else
                continue;
        }   
        if(j==s.size())
            ans=true;
        return ans;
    }
};