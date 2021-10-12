/*
	https://leetcode.com/problems/roman-to-integer/
	Done
	190921
*/
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> map1 = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}}; 
        int i,sum=0;
        for(i=0;i<s.size()-1;i++)
        {
            if(map1[s[i]]>=map1[s[i+1]])
                sum+=map1[s[i]];
            else
                sum-=map1[s[i]];             
        }
        sum+=map1[s[i]];        
        return abs(sum);
    }
};