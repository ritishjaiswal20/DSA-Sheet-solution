class MyQueue {
  
public:
      stack<int>in,out;
    MyQueue() {
        
    }
    
    void push(int x) {
        
        in.push(x);
      
    }
    
    int pop() {
        if(out.empty())
        {
        while(!in.empty())
        {
            out.push(in.top());
            in.pop();
        }
        }
        int x=out.top();
        out.pop();
        return x;
    }
    
    int peek() {
        if(out.empty())
        {
        while(!in.empty())
        {
            out.push(in.top());
            in.pop();
        }
        }
        int x=out.top();

        return x;
    }
    
    bool empty() {
   if(out.empty() && in.empty())
   {
       return true;
   }
        return false;
    }
};




