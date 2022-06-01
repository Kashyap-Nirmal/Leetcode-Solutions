/*
	https://leetcode.com/problems/implement-strstr/
	Done. Need to be a bit careful. Need improvement.
	28/5/2022
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)
            return 0;
        else if(haystack.size()<needle.size())          
            return -1;
        int i=0,j=0,k=INT_MAX;
        for(i=0;k!=i-1+needle.size() && i<=haystack.size()-needle.size();i++)
        {
            k=i;
            for(j=0;j<needle.size();j++)
            {                
                //cout<<haystack[k]<<" "<<j<<" "<<needle[j]<<"\n";
                if(needle[j]==haystack[k] && j!=needle.size()-1)
                    k++;                
                else if(j==needle.size()-1 && needle[j]==haystack[k])
                    return i;
                else
                    break;
            }
            //cout<<"\n";
        }
        //cout<<"Final: "<<i<<" "<<j<<" "<<k<<"\n";
        if(k==i+needle.size()-1 && j!=needle.size())
            return i-1;
        else if(j==needle.size())
            return j;
        else
            return -1;
    }
};