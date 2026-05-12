class MinStack {
private:
    struct S {
        int val;
        int min;
    };
    std::stack<S> minStack;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        if (minStack.empty()) {
            minStack.push({val, val});
        } else {
            minStack.push({val, std::min(minStack.top().min, val)});
        }        
    }
    
    void pop() {
        minStack.pop();
    }
    
    int top() {
        return minStack.top().val;
    }
    
    int getMin() {
        return minStack.top().min;
    }
};
