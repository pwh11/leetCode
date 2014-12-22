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
        ListNode *p1=head;
        ListNode *p2=head;
        while(p1&&p2)
        {
           
            if(p1->next)
            {
                p1=p1->next;
            }
            else
                return false;
            if(p2->next&&p2->next->next)
                p2=p2->next->next;
            else
                return false;
             if(p1==p2)
                return true;
        }
        return  false;
    }
};