/*
	https://leetcode.com/problems/reverse-integer/submissions/
	060921
	Done
	Check ostringstream and stringstream.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {        
        ostringstream s;
        bool flag=false;
        if(x<0)
        {
            x=abs(x);
            flag=true;
        }            
        s<<x;
        string str1=s.str();
        std::reverse(str1.begin() , str1.end());
        if(flag)
            str1="-"+str1;                    
        stringstream geek(str1);
        x = 0;
        geek >> x;
        if(x<=pow(-2,31) || x>=(pow(2,31)-1))
            x=0;        
        return x;
    }
};