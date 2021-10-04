#include <iostream>

using namespace std;

class Solution {
public:
    
    int length(ListNode *head, int k){
        
        ListNode *temp = head;
        int len = 0;
        
        while(temp != NULL){
            len ++;
            temp = temp -> next;
        }
        
        int ans = len - k;
        
        if(ans >= 0){
            return ans;
        }    
        
        
        int ans2 = k % len;
        
        if(ans2 == 0){
            return -1;
        } else {
              return len - ans2;    
        }
       
    
        
    }
    
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL || head -> next == NULL || k == 0){
            return head;
        }
        
        int pos = length(head, k);
        
        if(pos == -1){
            return head;
        }
        
        ListNode *prev = NULL, *curr = head;
        int i = 0;
        
        
        while(i < pos && curr != NULL){
            
            prev = curr;
            curr = curr -> next;
            i++;
        }
        
        if(prev != NULL){
           prev -> next = NULL;  
        }
       
        ListNode *temp = curr;
        
        while(temp != NULL && temp -> next != NULL){
            temp = temp -> next;
        }
        
        while(head != curr && head != NULL && temp != NULL){
            temp -> next = head;
            head = head -> next;
            temp = temp -> next;
        }
        
        return curr;
        
    }
};