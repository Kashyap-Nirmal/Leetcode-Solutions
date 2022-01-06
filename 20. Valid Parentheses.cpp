/*
	https://leetcode.com/problems/valid-parentheses/
	Done
	5/1/2022
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool ans=false;
        int i;
        st.push(s[0]);
        for(i=1;i<s.size();i++)
        {
            if(!st.empty())
            {
                //cout<<st.top()<<" "<<s[i]<<"\n";            
                if(st.top()=='(' && s[i]==')')
                {
                    //cout<<"C1\n";
                    st.pop();
                }                
                else if(st.top()=='{' && s[i]=='}')
                {
                    //cout<<"C2\n";
                    st.pop();
                }                                
                else if(st.top()=='[' && s[i]==']')
                {
                    //cout<<"C3\n";
                    st.pop();
                }                
                else
                    st.push(s[i]);
            }
            else
            {
                st.push(s[i]);                
            }                
        }
        if(i==s.size() && st.empty())
        {
            //cout<<"F\n";
            ans=true;
        }
        /*
        else
            cout<<"FN\n";
        */
        return ans;
    }
};