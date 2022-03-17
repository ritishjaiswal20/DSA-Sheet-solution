
#include <iostream>

using namespace std;
class stack{
  public:
  int size;
  int top;
  int* s;
};
void create(stack* st,int n){
    st->size=n;
    st->top=-1;
    st->s=new int[st->size];
}
void push(stack* st,int x)
{
    if(st->top==st->size -1)
    {
        cout<<"stack is full";
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(stack* st)
{
    if(st->top==-1)
    {
        cout<<"stack is empty";
        return -1;
    }
  int x=st->s[st->top];
  st->top--;
  return x;
    
}
int top(stack* st)
{
    return st->s[st->top];
}
int issize(stack* st)
{
    return st->top+1;
}
int isempty(stack* st)
{
    if(st->top==-1)
    {
        return 1;
    }
    return 0;
}
int isfull(stack* st)
{
    if(st->top==st->size-1)
    {
        return 1; 
    }
    return 0;
}
void display(stack* st)
{
    for(int i=st->top;i>=0;i--)
    {
        cout<<st->s[i];
    }
}

int main()
{
    cout<<"Hello World";
    int a[]={1,2,3,4,5};
    stack st;
    create(&st,5);
    for(int i=0;i<5;i++)
    {
        push(&st,a[i]);
    }
        display(&st);
    cout<<endl;
    cout<<pop(&st);
    cout<<pop(&st);
    cout<<pop(&st);
    cout<<pop(&st);
    cout<<endl;
    display(&st);
    
    return 0;
}
