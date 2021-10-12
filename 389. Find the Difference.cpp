/*
	https://leetcode.com/problems/find-the-difference/
	Done	
	031021	
*/
class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s=="")
            return t[0];
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());                
        if(t[t.size()-1]!=s[s.size()-1])
            return t[t.size()-1];
        for(int i=0;i<s.size();i++)
        {
            if(t[i]!=s[i])
                return t[i];
        }
        return t[t.size()-1];
    }
};