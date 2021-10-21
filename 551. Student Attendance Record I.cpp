/*
	https://leetcode.com/problems/student-attendance-record-i/
	Done
	21/10/2021
*/
class Solution {
public:
    bool checkRecord(string s) {
        bool ans=true;
        int lCnt=0,aCnt=0,i;
        for(i=0;i<s.size() && aCnt<2 && lCnt<3;i++)
        {
            if(s[i]=='A')
                aCnt++;
            else if(s[i]=='L')
                lCnt++;
            if(lCnt>0 && s[i]!='L')
                lCnt=0;
        }
        if(aCnt==2 || lCnt==3)
            ans=false;
        return ans;
    }
};