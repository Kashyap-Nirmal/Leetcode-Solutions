/*
	https://leetcode.com/problems/first-unique-character-in-a-string/
	Done
	121021
*/
class Solution {
public:
    int firstUniqChar(string s) {
        int i=0,ans=0;
        int arr[26][2]={0,0};
        for(i=0;i<s.size();i++)
        {
            arr[s[i]-'a'][0]++;
            arr[s[i]-'a'][1]=i;
        }        
        //cout<<"\n";
        for(i=0;i<s.size();i++)
        {     
            //cout<<s[i]<<" "<<arr[s[i]-'a'][0]<<" "<<arr[s[i]-'a'][1]<<"\n";            
            if(arr[s[i]-'a'][0]==1)
                return arr[s[i]-'a'][1];            
        }           
        return -1;        
    }
};