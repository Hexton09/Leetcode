class Solution {
public:
    int getLength(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }
    
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int len = getLength(list1);
        
        // Find the ath node and its previous node
        ListNode* prevA = NULL;
        ListNode* curr = list1;
        for (int i = 0; i < a; ++i) {
            prevA = curr;
            curr = curr->next;
        }
        
        // Find the bth node
        ListNode* currB = list1;
        for (int i = 0; i < b; ++i) {
            currB = currB->next;
        }
        
        // Find the last node of list2
        ListNode* lastList2 = list2;
        while (lastList2->next != NULL) {
            lastList2 = lastList2->next;
        }
        
        // Connect prevA to list2 and list2 to currB
        if (prevA != NULL) {
            prevA->next = list2;
        } else {
            list1 = list2;
        }
        lastList2->next = currB->next;
        
        return list1;
    }
};
