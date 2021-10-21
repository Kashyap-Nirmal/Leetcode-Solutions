/*
	https://leetcode.com/problems/self-dividing-numbers/
	Done
	22/10/2021
*/
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        bool flag;
        ostringstream s;
        for(int j=left;j<=right;j++)
        {
            s.str("");            
            flag=true;
            s<<j;
            string str1=s.str();
            for(int i=0;flag && i<str1.size();i++)
            {
                if(str1[i]!='0' && j%(str1[i]-'0')==0)
                    continue;
                else
                    flag=false;                
            }    
            if(flag)
                ans.push_back(j);
        }
        return ans;
    }
};