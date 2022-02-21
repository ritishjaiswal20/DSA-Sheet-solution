class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
            if(head == NULL||head->next == NULL) return head;
        ListNode *d=new ListNode(0);
        d->next=head;
        ListNode *cur,*prev,*next;
        prev=d;
        int l=0;
        ListNode *p;
        p=head;
        while(p)
        {
            l++;
            p=p->next;
        }
             
        while(l>=k)
        {
            cur=prev->next;
            next=cur->next;
            for(int i=1;i<k;i++)
            {
                cur->next=next->next;
                next->next=prev->next;
                prev->next=next;
                next=cur->next;
            }
            prev=cur;
            l-=k;
        }
        return d->next;
    }
};
