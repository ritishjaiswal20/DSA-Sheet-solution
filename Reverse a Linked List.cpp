#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
}*first;

void create()
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
     first=q;
}
void display(node *first)
{ 
    
    cout<<"hey buddy";
    node*p= first;
    while(p)
    {
        cout<<p->data;
        p=p->next;
    }
}
int main()
{
    create();

    reverse(first);
        display(first);
    return 0;
}
