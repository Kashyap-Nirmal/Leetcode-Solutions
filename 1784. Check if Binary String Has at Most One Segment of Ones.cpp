/*
	https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
	Done	
	071021
*/
class Solution {
public:
    bool checkOnesSegment(string s) {
        bool ans=true,flag0=false;
        int i;
        if(s.size()==1 && s[0]=='1')
            return true;        
        for(i=0;i<s.size();i++)
        {
            if(flag0 && s[i]=='1')
                return false;         
            else if(s[i]=='0')
                flag0=true;
        }
        return ans;        
    }
};