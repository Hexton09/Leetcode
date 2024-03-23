class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next)
            return;
        
        // Find the middle of the linked list
        ListNode *slow = head, *fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Reverse the second half of the linked list
        ListNode *second_head = slow->next;
        slow->next = nullptr; // Breaking the first half
        
        second_head = reverseList(second_head);
        
        // Merge the two halves of the linked list
        ListNode *first = head;
        while (second_head) {
            ListNode *tmp1 = first->next;
            ListNode *tmp2 = second_head->next;
            first->next = second_head;
            second_head->next = tmp1;
            first = tmp1;
            second_head = tmp2;
        }
    }
    
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr;
        while (head) {
            ListNode *nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }
};
