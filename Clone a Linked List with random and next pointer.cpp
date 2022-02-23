
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head->next ==NULL || head->next->next==NULL)
        {
          return head;
        }
        Node* p=head;
        while(p)
        {
            Node* t=new Node(p->val);
            t->next=p->next;
            p->next=t;
            p=p->next->next;
        }
        Node *curr=head;
        while(curr)
        {
            if(curr->next!=NULL)
            {
              curr->next->random=(curr->random!=NULL)?curr->random->next:NULL;
            }
            curr=curr->next->next;
        }
        
        p=head;
        Node* q=head->next;
        Node*  r=head->next;
        while(p->next->next)
        {
            p->next=r->next;
            p=p->next;
            r->next=p->next;
            r=r->next;
        }
        p->next=0;
        r->next=0;
        
        
        return q;
    }
};

