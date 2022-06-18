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
void findmiddle()
{
    node* slow=first;
    node* fast=first;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"middlle ellement";
    cout<<slow->data;
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
        cout<<endl;
        findmiddle();
    return 0;
}
