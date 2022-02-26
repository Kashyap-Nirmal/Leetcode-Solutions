/*
	https://leetcode.com/problems/reverse-linked-list/
	Done
	25/2/2022
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
    ListNode* reverseList(ListNode* head) {
        vector<int> LL;
        ListNode*temp=head;
        if(head==NULL)
            return head;
        while(temp!=NULL)
        {
            LL.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        for(int i=LL.size()-1;i>-1;i--)
        {
            temp->val=LL[i];            
            temp=temp->next;
        }            
        return head;
    }
};