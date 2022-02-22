class Solution {
public:
    bool isPalindrome(ListNode* head) {
       
            ListNode* slow=head;
            ListNode* fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* p,*q,*r;
        r=NULL;
        q=NULL;
        p=slow->next;
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        slow->next=q;
        ListNode* s=head;
        while(q)
        {
            if(q->val !=s->val)
            {
                return false;
            }
            q=q->next;
            s=s->next;
        }
        return true;
    }
};

