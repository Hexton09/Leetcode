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
    int getlength(ListNode* head)
    {   int len=0;
        ListNode* temp=head;
        while(temp!=NULL)
            {
                len++;
                temp=temp->next;
            }
        return len;
    }
    ListNode* middleNode(ListNode* head) 
        {
            int n = getlength(head);
            int position = n/2+1;
            int currpos=1;
            ListNode* temp =head;
            while(currpos != position)
            {
                currpos++;
                temp=temp->next;
            }
            return temp;
        }
    
};
