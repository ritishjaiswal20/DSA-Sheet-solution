class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        ListNode* p=head;
        int len=1;
        while(p->next)
        {
            len++;
            p=p->next;
        }
        p->next=head;
        k=k%len;
        int end=len-k;
        while(end)
        {
            p=p->next;
            end--;
        }
        head=p->next;
        p->next=0;
        return head;
    }
};
