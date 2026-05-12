class MinStack {
private:
    std::stack<int> minStack;
    std::map<int, int> minMap;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        minStack.push(val);
        minMap[val] += 1;
    }
    
    void pop() {
        int val = minStack.top();
        minStack.pop();
        minMap[val] -= 1;
        if (!minMap[val]) {
            minMap.erase(val);
        }
    }
    
    int top() {
        return minStack.top();
    }
    
    int getMin() {
        return minMap.begin()->first;
    }
};
