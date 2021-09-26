#include <iostream>
#include<stack>
using namespace std;


class Solution {
public:
    string removeDuplicates(string s) {
       
        stack<char> a;
        string ans;
        
    for(int i = 0; i < s.length(); i++){
                 
        if(!a.empty() &&  s[i] == a.top()){
            a.pop();
        }
        
        else {
            a.push(s[i]);
        }
             
} 
    while(!a.empty()){
        
        ans += a.top();
        a.pop();
    }
        
    reverse(ans.begin(), ans.end());
        
    return ans;
        
        
    }
};