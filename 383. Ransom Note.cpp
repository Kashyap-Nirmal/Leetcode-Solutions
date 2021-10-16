/*
	https://leetcode.com/problems/ransom-note/
	Done
	161021
*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool ans=false;
        if(ransomNote.size()>magazine.size())
            return ans;
        int rN[26]={0},mZ[26]={0},i;
        for(i=0;i<ransomNote.size();i++)
        {
            rN[ransomNote[i]-'a']++;
        }
        for(i=0;i<magazine.size();i++)
        {
            mZ[magazine[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(rN[i]>mZ[i])
                return ans;
        }
        ans=true;
        return ans;
    }
};