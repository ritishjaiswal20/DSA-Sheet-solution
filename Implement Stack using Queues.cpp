class MyStack {
    queue<int>q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        if(q.empty())
        {
            q.push(x);
           return;
        }
        int n=q.size();
        q.push(x);
        while(n)
        {  
            int X=q.front();
            q.pop();
            q.push(X);
            n--;
        }
        return;
    }
    
    int pop() {
        int res=q.front();
        q.pop();
        return res;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
