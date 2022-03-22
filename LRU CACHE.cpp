class LRUCache {
public:
    class node{
        public:
        int key;
        int value;
        node* next;
        node* prev;
        
        node(int key_,int value_)
        {
            key=key_;
            value=value_;
        }
    }*head,*tail;
    int cap;
    unordered_map < int, node * > m;
    LRUCache(int capacity) {
        cap=capacity;
        head=new node(-1,-1);
        tail=new node(-1,-1);

    }
    
    void addnode(int key_,int value_)
    {
        node*t=new node(key_,value_);
        node* temp=head->next;
        t->next=head->next;
        t->prev=head;
        temp->prev=t;
        head->next=t;
    }
    void deletenode(node* deletenode)
    {
        node* deleteprev=deletenode->prev;
        node* deletenext=deletenode->next;
        deleteprev->next=deletenext;
        deletenext->prev=deleteprev;

    }
    int get(int key_) {
        
        if(m.find(key_)!=m.end())
        {
            node* resnode=m[key_];
            int resnodevalue=resnode->value;
            deletenode(resnode);
            m.erase(key_);
            addnode(key_,resnodevalue);
            m[key_]=head->next;
         return resnodevalue;
        }
        else{
          return -1;            
        }
        return -1;

    }
    
    void put(int key_, int value_) {
       if(m.find(key_)!=m.end())
       {
           node* resnode=m[key_];
           deletenode(resnode);
           m.erase(key_);
       }
        if(m.size()==cap)
        {
            m.erase(tail->prev->key);
            deletenode(tail->next);
        }
        addnode(key_,value_);
        m[key_]=head->next;
    }
};

