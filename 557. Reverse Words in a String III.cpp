/*
	https://leetcode.com/problems/reverse-words-in-a-string-iii/
	Done
	101021
	Needs optimization
*/
class Solution {
public:
    string reverseWords(string s) {
        char c=' ';
        int i=0;
        string s1,ans;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==c)
            {                
                reverse(s1.begin(),s1.end());
                ans+=s1+" ";
                s1.clear();                
            } 
            else
                s1.push_back(s[i]);                                    
        }
        reverse(s1.begin(),s1.end());
        ans+=s1;
        return ans;
    }
};