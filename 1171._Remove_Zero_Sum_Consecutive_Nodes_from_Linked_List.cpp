#include <unordered_map>

using namespace std;

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
    void sanitizemap(ListNode* head, unordered_map<int,ListNode*>& mp, int csum) {
        int temp = csum;
        while (head) {
            temp += head->val;
            if (temp == csum) {
                break;
            }
            mp.erase(temp);
            head = head->next;
        }
    }
    
    ListNode* removeZeroSumSublists(ListNode* head) {
        if (!head) {
            return nullptr;
        }
        
        unordered_map<int, ListNode*> mp;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        mp[0] = dummy; // Dummy node with sum 0
        int csum = 0;
        
        while (head) {
            csum += head->val;
            if (mp.find(csum) != mp.end()) {
                sanitizemap(mp[csum]->next, mp, csum);
                mp[csum]->next = head->next;
            } else {
                mp[csum] = head;
            }
            head = head->next;
        }
        
        return dummy->next;
    }
};
