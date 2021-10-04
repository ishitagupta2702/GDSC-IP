#include <iostream>

using namespace std;

class Solution {
public:
    
    int length(ListNode *head){
        
        int len = 0;
        
        while(head != NULL){
            ++len;
            head = head -> next;
        }
        
        return len;
        
    }
    
    ListNode *reverse(ListNode *l1){
       
        ListNode *curr = l1, *nextNode = l1, *prev = NULL;
        
        while(nextNode != NULL){
            
            nextNode  = nextNode -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextNode; 
        }
        
        l1 = prev;
        return l1;
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(l1 == NULL){
            return l2;
        } 
        else if (l2 == NULL){
            return l1;
        }
        
        l1 = reverse(l1);
        l2 = reverse(l2);
        
        int sum, add, carry = 0;
        
        ListNode *head, *temp, *finalHead;
        
        if(length(l1) >= length(l2)){
            head = l1;
            temp = l2;
            finalHead = l1;
        }
        
        else {
            head = l2;
            temp = l1;
            finalHead = l2;
        }
        
        
        while(temp != NULL){
            
            sum = head -> val + temp -> val + carry;
            
            if(sum > 9){
                add = sum % 10;
                carry = 1;
            }
            
            else {
                add = sum;
                carry = 0;
            }
            
            head -> val = add;
            
            head = head -> next;
            temp = temp -> next;
        }
        
        
        while(carry == 1 && head != NULL){
            
            sum = head -> val + carry;
            
            if(sum > 9){
                add = sum % 10;
                carry = 1;
            }
            
            else {
                add = sum;
                carry = 0;
            }
            
            head -> val = add;
            head = head -> next;
        }
        
        
       if(carry == 1 && head == NULL){
           
            ListNode *node = new ListNode(carry);
           
            ListNode *find = finalHead;
           
            while(find -> next != NULL){
                find = find -> next;
            }
            
           find -> next = node;
        }
    
        
        finalHead = reverse(finalHead);
        
        return finalHead;
    }
};
