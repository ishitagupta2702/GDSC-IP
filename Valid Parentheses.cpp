#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        
        stack<int> stack;
        
        for(int i = 0; i < s.length(); i++){
            
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
               stack.push(s[i]); 
            }
            
            else {

                if(stack.empty()){
                    return false;
                }    
                
                
                if(s[i] == ')' && stack.top() != '(' || s[i] == '}' && stack.top() != '{' || s[i] == ']' && stack.top() != '[' ){
                    return false;
                }
                
                stack.pop();
             
            }
            
        }
        
        if(!stack.empty()){
            return false;
        }
        
        return true;
    }
};