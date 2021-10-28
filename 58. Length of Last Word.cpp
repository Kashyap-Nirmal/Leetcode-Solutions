/*
	https://leetcode.com/problems/length-of-last-word/submissions/
	Done. Needs improvement.
	27/10/2021
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int i=0,j=0;
        bool flag=false;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ' && !flag)
                j++;
            else if(s[i]==' ' && flag)
                break;
            else
                flag=true;                
        }
        return i-j;
    }
};