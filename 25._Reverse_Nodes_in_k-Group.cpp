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

    int getLength(ListNode* head)
        {
            ListNode* temp = head;
            int count=0;
            while(temp != NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
        }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len= getLength(head);

        if(len<k)
        {
            return head;
        }

        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextNode =curr->next;
        int position =0;

        while(position < k)
        {
            nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
            position++;
        }

        ListNode* recurrsionkaAns= NULL;
        if(nextNode !=NULL)
        {
            recurrsionkaAns=reverseKGroup(nextNode ,k);
            head ->next=recurrsionkaAns;
        }

        return prev;
    }
};
