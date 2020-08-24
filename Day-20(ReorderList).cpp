/*
Time complexity : O(N^2)
Space complexity : O(1)
My approach: create a new node and insert them into corresponding position.
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
    void reorderList(ListNode* head) 
    {
        if(head==NULL)
            return;
        ListNode *slow=head , *fast=head;
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* ptr= head;
        while(1)
        {
            ListNode* lastone=slow;
            
        while(lastone->next)
        {
            lastone=lastone->next;
            
        }
            if(lastone==slow)
            { 
                slow->next=NULL;
                return;
            }
           ListNode* inserted = new ListNode(lastone->val);
            ListNode* temp=slow;
            while(temp->next!= lastone)
                temp=temp->next;
            temp->next=NULL;
            
            inserted->next=ptr->next;
            ptr->next=inserted;
            ptr=ptr->next->next;
            
        }
        
        
        
    }
};
