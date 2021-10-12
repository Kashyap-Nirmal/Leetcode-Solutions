/*
	https://leetcode.com/problems/check-if-n-and-its-double-exist/
	Done
	230921
*/
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i=0;
        int cnt0=0;
        for(i=0;i<arr.size();i++)
        {            
            if(arr[i]!=0 && binary_search(arr.begin(),arr.end(),arr[i]*2))
                return true;  
            if(arr[i]==0)
                cnt0++;
            if(cnt0==2)
                return true;
        }
        return false;
    }
};