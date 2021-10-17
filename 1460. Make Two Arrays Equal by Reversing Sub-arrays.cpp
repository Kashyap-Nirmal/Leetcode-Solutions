/*	
	https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/
	Done
	171021
*/
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int tC[1001]={0},aC[1001]={0},i;
        for(i=0;i<arr.size();i++)
        {
            tC[target[i]]++;
            aC[arr[i]]++;
        }
        for(i=1;i<1001;i++)
        {
            //cout<<i<<" "<<tC[i]<<" "<<aC[i]<<"\n";
            if(tC[i]!=aC[i])
                return false;
        }
        //cout<<"\n";
        return true;
    }
};