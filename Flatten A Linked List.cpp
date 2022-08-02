
/*  Function which returns the  root of 
    the flattened linked list. */
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
                p=p->bottom;
               
        }
        else
        {
            r=q;
             head=r;
            q=q->bottom;
          
        }
        
        while(p && q)
        {
            if(p->data<q->data)
            {
                r->bottom=p;
                r=p;
                p=p->bottom;
            }
            else
            {
                r->bottom=q;
                r=q;
                q=q->bottom;
            }
          
        }
        while(p)
        {
            r->bottom=p;
            r=p;
            p=p->bottom;
        }
          while(q)
        {
            r->bottom=q;
                          r=q;

            q=q->bottom;
        }
        return head;
    }
Node *flatten(Node *root)
{  
      if (root == NULL || root->next == NULL) 
            return root; 
  
        // recur for list on right 
        root->next = flatten(root->next); 
  
        // now merge 
        root = merge(root, root->next); 
      return root;
}
