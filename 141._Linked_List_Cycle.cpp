/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        map<ListNode*, bool> table;

        ListNode* temp= head;
        while(temp!=NULL)
        {
            if(table[temp]==false)
            {
                table[temp]=true;
            }
            else
            {
                //cycle present
                return true;
            }
            temp=temp->next;
        }
            return false;
    }
};
