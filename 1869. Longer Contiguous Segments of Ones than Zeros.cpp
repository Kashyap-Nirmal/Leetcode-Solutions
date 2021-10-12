/*
	https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/
	Done
	101021
*/
class Solution {
public:
    bool checkZeroOnes(string s) {
        int cnt1=0,cnt0=0,i,temp=0;
        bool ans=false;
        char tempc=' ';
        for(i=0;i<s.size();i++)
        {            
            if(s[i]!=tempc && i>0)
                temp=0;
            if(s[i]=='1')
            {
                temp++;
                cnt1=max(cnt1,temp);
            }
            else if(s[i]=='0')   
            {
                temp++;
                cnt0=max(cnt0,temp);
            } 
            tempc=s[i];
            //cout<<i<<" "<<cnt1<<" "<<cnt0<<" "<<temp<<"\n";
        }
        if(cnt1>cnt0)
            ans=true;
        return ans;
    }
};