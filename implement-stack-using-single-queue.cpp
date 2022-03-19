
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int>q;
    public:
    void push(int x)
    {
        int n=q.size();
        q.push(x);
        for(int i=0;i<n;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int pop()
    {
        int n=q.front();
        q.pop();
        return n;
    }
    int Top()
    {
        return q.front();
    }
};
int main()
{
    cout<<"Hello World";
     Stack s;
     s.push(3);
       s.push(4);
         s.push(5);
           s.push(6);
           cout<<endl;
           cout<<s.pop();
               cout<<s.pop();
                   cout<<s.pop();
    return 0;
}
