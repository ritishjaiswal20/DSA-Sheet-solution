
#include <iostream>

using namespace std;

class queue{
   public:
   int size;
   int front;
   int rear;
   int* Q;
};
void create(queue* q,int n)
{
   q->size=n;
   q->front=-1;
   q->rear=-1;
   q->Q=new int[q->size];
}
void push(queue* q,int x)
{
    if(q->rear==q->size-1)
    {
        cout<<"queue is full";
    }
    else
    {
         q->rear++;
         q->Q[q->rear]=x;
    }
    return;
}
int pop(queue* q)
{   
    int x=-1;
    if(q->front==q->rear)
    {
        cout<<"queue is empty";
    }
    else
    {         q->front++;
         x=q->Q[q->front];

    }
    return x;
}
void display(queue* q)
{  int x=q->front+1;
    while(x<=q->rear)
    {
        cout<<q->Q[x];
        x++;
        
    }
    return;
}

int main()
{

   queue q;
   create(&q,5);
   int a[]={1,2,3,4,5};
  for(int i=0;i<5;i++)
  {
      push(&q,a[i]);
  }

   display(&q);
  cout<<endl;
  cout<<pop(&q);
      cout<<endl;
  cout<<pop(&q);
      cout<<endl;
  cout<<pop(&q);
  cout<<endl;
  display(&q);
    return 0;
}
