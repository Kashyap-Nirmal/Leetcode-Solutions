/*
	https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
	Done
	230921
*/
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size()==1)
        {
            arr[0]=-1;    
            return arr;
        }                        
        vector<int>::iterator iter=arr.begin();
        for(;iter!=arr.end();iter++)
            *iter=*max_element(iter+1,arr.end());            
        arr[arr.size()-1]=-1;
        return arr;
    }
};