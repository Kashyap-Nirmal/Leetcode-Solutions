/*
	https://leetcode.com/problems/valid-palindrome/
	Done
	8/2/2022
*/
class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=0;
        bool ans=true;
        for(i=0;i<s.size();i++)
        {
            if(iswalnum(s[i]))
            {
                s[j]=tolower(s[i]);               
                j++;
            }            
        }
        s.resize(j);
        //cout<<s<<"\n";
        j=s.size()-1;
        for(i=0;i<s.size()/2;i++,j--) {
            if(s[i]==s[j])
                continue;
            else
                ans=false;
        }                
        return ans;
    }
};