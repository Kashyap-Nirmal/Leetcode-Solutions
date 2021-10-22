/*
	https://leetcode.com/problems/long-pressed-name/
	Done. Need to be a bit careful.
	22/10/2021
	TC where you need to be careful:
		"pyplrz"
		"ppyypllr"
		"rick"
		"kcir"
*/
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int nCnt[26]={0},tCnt[26]={0},i=0,j=0;
        char temp;
        if(name.size()>typed.size())
            return false;        
        for(j=0;j<typed.size();j++)
        {
            if(name[i]==typed[j])
            {
                temp=name[i];
                i++;  
            }
            else if(typed[j]==temp)
                continue;
            else 
                return false;                            
        }
        if(i==name.size() && name[i-1]==typed[typed.size()-1])
            return true;
        return false;
    }
};