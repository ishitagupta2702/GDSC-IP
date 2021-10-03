#include <iostream>

using namespace std;

class Solution {
public:
    
    int length(ListNode *head){
        
        ListNode *temp = head;
        int count = 0;
        
        while(temp != NULL){
            ++count;
            temp = temp -> next;
        }
        
        return count;
    }
    
    
    ListNode* middleNode(ListNode* head) {
        
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        int k = length(head);
   
        ListNode *fast = head -> next, *slow = head;
        
        if(k % 2 == 0){
            while(fast -> next != NULL){
                fast = fast -> next -> next;
                slow = slow -> next;
            }
            
            slow = slow -> next;
        }
        
        else {
            while(fast != NULL){
                fast = fast -> next -> next;
                slow = slow -> next;
            }
        }
        
        return slow;
    }
};