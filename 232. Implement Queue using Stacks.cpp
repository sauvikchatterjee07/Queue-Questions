    



    Push Operation is O(N)




    MyQueue() {
        
    }
    stack<int> s1, s2;
    
    
    void push(int x) {
        
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int res = s1.top();
        s1.pop();
        return res;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }



    Pop & Top Operation is O(1) amortise
    
    
    
    class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> ip, op;

    void push(int x) {
        ip.push(x);
    }
    
    int pop() {
        int res = 0;
        if(!op.empty()){
            res = op.top();
            op.pop();
        }
        else{
            while(!ip.empty()){
                op.push(ip.top());
                ip.pop();
            }
            res = op.top();
            op.pop();
        }
        return res;
    }
    
    int peek() {
        int res = 0;
        if(!op.empty()){
            res = op.top();
        }
        else{
            while(!ip.empty()){
                op.push(ip.top());
                ip.pop();
            }
            res = op.top();
        }
        return res;
    }
    
    bool empty() {
        return op.empty() && ip.empty();
    }
};





