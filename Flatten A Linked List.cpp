    Node* merge(Node* list1, Node* list2) {
        Node *r,*p,*q,*head;
        p=list1;
        q=list2;
        
        if(p==NULL)
        {
            return q;
        }
        if(q==NULL)
        {
            return p;
        }
        
        if(p->data <q->data)
        {
                r=p;
                head=r;
                p=p->next;
               
        }
        else
        {
            r=q;
             head=r;
            q=q->next;
          
        }
        
        while(p && q)
        {
            if(p->data<q->data)
            {
                r->next=p;
                r=p;
                p=p->next;
            }
            else
            {
                r->next=q;
                r=q;
                q=q->next;
            }
          
        }
        while(p)
        {
            r->next=p;
            r=p;
            p=p->next;
        }
          while(q)
        {
            r->next=q;
                          r=q;

            q=q->next;
        }
        return head;
    }
Node *flatten(Node *root)
{  
    if(root==NULL)
    {
        return NULL;
    }
    Node*p,*q;
    p=root;
    p->next=NULL;
    q=flatten(root->next);
    Node*ans= merge(p,q);
    return ans;
}

