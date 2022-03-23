// 1st solution
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
}*first,*second,*third;


void add(node*r, node*q)
{
    node* p;
    p=new node;
    third=p;
    int sum=r->data+q->data;
    p->data=sum %10;
    int carry=sum/10;
    p->next=0;
    int x=0;
     r=r->next;
     q=q->next;
    while(r && q)
    {
        
        sum=r->data + q->data + carry;
        carry=sum/10;
        node* t=new node;
        t->data= sum%10;
        t->next=0;
        p->next=t;
        int p;
        p=t;
        r=r->next;
        q=q->next;
    }
    while(r)
    {
        node* t=new node;
        int sum=carry+r->data;
        carry=sum/10;
        t=new node;
        t->data=sum %10;
        t->next=0;
        p->next=t;
        p=t;
        r=r->next;
        
    }
        while(q)
    {
        node* t=new node;
        int sum=carry+q->data;
        carry=sum/10;
        t=new node;
        t->data=sum %10;
        t->next=0;
        p->next=t;
        p=t;
        q=q->next;
        
    }
}


void display()
{ 
    int y;
    cout<<"hey buddy";
    node*p= third;
    while(p)
    {
        cout<<p->data;
        p=p->next;
    }
}
void reverse(node *p)
{

    node *q=NULL;
    node *r=NULL;
    while(p)
    {   
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    
    }
     third=q;
}
void create1(int n)
{   
    
    node*p;
    p=new node;
    p->data=n%10;
    n=n/10;
    p->next=0;
    first=p;
    while(n)
    {
      node *t;
      t=new node;
      t->data=n%10;
      t->next=0;
      p->next=t;
      p=t;
      n=n/10;
    }
}

void create2(int n)
{
    node*p;
    p=new node;
    p->data=n%10;
    n=n/10;
    p->next=0;
    second=p;
    while(n)
    {
      node *t;
      t=new node;
      t->data=n%10;
      t->next=0;
      p->next=t;
      p=t;
      n=n/10;
    }
}


int main()
{       
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
        create1(n1);
        create2(n2);
        cout<<endl;
        cout<<endl;
        add(first,second);
        cout<<endl; 
        cout<<"added ";
        reverse(third);
        display();
    return 0;
}

// 2ns solution














