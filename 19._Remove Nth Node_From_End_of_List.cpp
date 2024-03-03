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
    
    int getlenght(ListNode* head)
    {
        ListNode* temp=head;
        int count =0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = getlenght(head);
        int pos= len-n+1;

        if(head==NULL)
        {
            return NULL;
        }

        if(pos==1)
        {
            ListNode* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }

        else
        {
            ListNode* prev=NULL;
            ListNode* curr=head;
            while(pos!=1)
            {
                pos--;
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            delete curr;
            return head;
        }
        return head;
        
    }
};
