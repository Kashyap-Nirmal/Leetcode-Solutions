/*
	https://leetcode.com/problems/plus-one/
	Done
	190921
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i;
        bool carry=true;
        for(i=digits.size()-1;carry && i>=0;i--)
        {
            carry=false;
            if(digits[i]+1>=10)
                carry=true;                
            digits[i]=(digits[i]+1)%10;
            if(carry && i==0)
            {
                digits.insert(digits.begin(),1);
                carry=false;
            }                
        }
        return digits;
    }
};