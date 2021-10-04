#include <iostream>

using namespace std;

class Solution {
public:
    
    int getIndex(ListNode* head, int n){
       
        int count = 0;
        ListNode *temp = head;
        
        while(temp != NULL){
            temp = temp -> next;
            count++;
        }
        
        if(count - n >= 0){
            return count - n;
        }
        
        else {
            return -1;
        }
    }
    
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
       if(head == NULL || n == 0){
           return head;
       }
        
        int index = getIndex(head, n);
        
        ListNode *temp = head;
        int i = 0;
        
        if(index == 0){
            head = head -> next;
            return head;
        }
        
        while(i < index - 1 && temp != NULL){
            
            temp = temp -> next;
            i++;
        }
        
        
           
        if(temp == NULL || temp -> next == NULL){
            return head;
        }     
        
        
        ListNode *b = temp -> next;
        
        if(b -> next == NULL){
            temp -> next = NULL;
        }
        
        else {
            ListNode *c = b -> next;
            temp -> next = c;
        }
        
        return head;
    }
};