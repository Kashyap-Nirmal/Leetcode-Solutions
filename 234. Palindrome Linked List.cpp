/*
	https://leetcode.com/problems/palindrome-linked-list/
	Done. Needs improvement.
	22/10/2021
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int j;
        bool ans=false;
        string s="",s1="";
        ListNode* temp=head;
        while(temp!=NULL)
        {
            s.push_back(temp->val+'0');
            temp=temp->next;
        }        
        if(s.size()==2 && s[0]==s[1])
            return true;
        else if(s.size()==2)
            return false;
        s1=s;
        s=s.substr(0, s.size()/2);
        if(s1.size()%2==1)
            j=s1.size()/2+1;
        else
            j=s1.size()/2;            
        s1=s1.substr(j, s.size());              
        reverse(s1.begin(),s1.end()); 
        if(s==s1)
            ans=true;
        return ans;
    }
};