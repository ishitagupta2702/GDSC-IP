#include <iostream>
#include<stack>
#include<queue>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    
    stack<int> minStack;
    stack<int> values;
    
    MinStack() {
        
    }
    
    void push(int val) {
        
        values.push(val);

        if(minStack.empty()) {
            minStack.push(val);
            return;
        }
        
        minStack.push(min(minStack.top(), val));     
    }
    
    void pop() {
        
        if(values.empty()) 
            return;
        
        minStack.pop();
        
        values.pop();
    }
    
    int top() {
        
        if(!values.empty()){
            return values.top();
        }
        
        else {
            return -1;
        }
    }
    
    int getMin() {
        
        if(!minStack.empty()){
            return minStack.top();
        }
        
        else {
            return -1;
        }
    }
};
