#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
}*first,*second,*M;

void create1()
{
    node*p;
    p=new node;
    int n;
    cout<<"enter the lenght of the linked list";
    cin>>n;
    int x;
    cin>>x;
    p->data=x;
    p->next=0;
    first=p;
    for(int i=1;i<n;i++)
    {
      cin>>x;
      node *t;
      t=new node;
      t->data=x;
      t->next=0;
      p->next=t;
      p=t;
    }
}

void create2()
{
    node*p;
    p=new node;
    int n;
    cout<<"enter the lenght of the linked list";
    cin>>n;
    int x;
    cin>>x;
    p->data=x;
    p->next=0;
    second=p;
    for(int i=1;i<n;i++)
    {
      cin>>x;
      node *t;
      t=new node;
      t->data=x;
      t->next=0;
      p->next=t;
      p=t;
    }
}


void merge(node*p, node*q)
{
    node *r;
     if(p==NULL|| q==NULL)
       {
           
           if(p!=NULL)
           {
               return p;
           }
           else
           {
               return q;
           }
       }
    if(p->data< q->data)
    {
        r=p;
        p=p->next;
    }
    else
    {
        r=q;
        q=q->next;
    }
    M=r;
    while(p && q)
    {
         if(p->data < q->data)
         {
             r->next=p;
             r=r->next;
             p=p->next;
         }
         else
         {
             r->next=q;
             r=r->next;
             q=q->next;
         }
    }
    while(p)
    {
        r->next=p;
        r=r->next;
        p=p->next;
    }
    while(q)
    {
        r->next=q;
        r=r->next;
        q=q->next;
    }
}



void display(node* t)
{ 
    
   
    node*p=t;
    while(p)
    {
        cout<<p->data<<"  ";
        p=p->next;
    }
}
int main()
{
        create1();
        create2();
        cout<<endl;
        cout<<"linkedlist 1";
       display(first);
       cout<<endl;
       
        cout<<"Linked list 2";
         display(second);
        merge(first,second);
        cout<<endl; 
        cout<<"merged ";
        display(M);
    return 0;
}
