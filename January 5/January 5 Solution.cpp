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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL)
            return NULL;
        
        ListNode* res = new ListNode(-1);
        ListNode* dummy = res;
        
        while(head != NULL)
        {
            ListNode *temp = head;
            int count=0;
            while(head != NULL && head->val == temp -> val)
            {
                head = head->next;
                count++;
            }
            if(count == 1)
            {
                dummy -> next = temp;
                dummy = dummy ->next;
            }
        }
        dummy->next = NULL;
        return res->next;
    }
};
