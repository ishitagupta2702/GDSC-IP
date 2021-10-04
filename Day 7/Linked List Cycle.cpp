#include <iostream>

using namespace std;

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *runner = head, *walker = head;
        bool isLoop = false;
        
        while(runner != NULL && runner -> next != NULL){
            
            runner = runner -> next -> next;
            walker = walker -> next;
            
            if(runner == walker){
                isLoop = true;
                break;
            }
        }
        
        if(!isLoop){
            return NULL;
        }
        
        if(isLoop){
            
            walker = head;
            
            while(walker != runner){
                walker = walker -> next;
                runner = runner -> next;
            }
        }
        
        
        return walker;
    }
};