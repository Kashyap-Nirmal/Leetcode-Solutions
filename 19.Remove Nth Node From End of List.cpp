/*
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
	https://leetcode.com/problems/remove-nth-node-from-end-of-list/
	Done
	111021
*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0,i;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        if(cnt==1 && n==cnt)
            return NULL;
        else if(cnt==n)
            return head->next;            
        temp=head;
        for(i=0;i<cnt-n-1;i++)
            temp=temp->next;
        if(temp->next!=NULL)
            temp->next=temp->next->next;
        return head;
    }
};