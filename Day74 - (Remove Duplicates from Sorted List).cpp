class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
        {
            return head ;
        }
        ListNode *curr = head ;
        while (curr -> next != NULL)
        {
            if (curr -> val == curr -> next -> val)
            {
                ListNode *nextnext = curr -> next -> next;
                ListNode *toDelete = curr -> next ;
                delete(curr -> next);
                curr -> next = nextnext ;
            }

            else
            {
                curr = curr -> next ; 
            }

        }
        return head ;
    }
};