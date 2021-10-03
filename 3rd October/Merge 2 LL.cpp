#include <iostream>

using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode *fhead = NULL;
    ListNode *ftail = NULL;
    
    if(l1 == NULL)
        return l2;
    
    else if (l2 == NULL)
        return l1;
    
    
    
    while(l1 != NULL && l2 != NULL)
    {
        if((l1 -> val <= l2 -> val) && fhead == NULL)
        {
            fhead = l1;
            ftail = l1;
            l1 = l1 -> next;
        }
        
        
        
        else if((l1 -> val > l2 -> val) && fhead == NULL)
        {
            fhead = l2;
            ftail = l2;
            l2 = l2 -> next;
        }
        
        
        
        else if((l1 -> val <= l2 -> val) && fhead != NULL)
        {
            
            ftail -> next = l1;
            l1 = l1 -> next;
            ftail = ftail -> next;
        }
        
        
        
          else if((l1 -> val > l2 -> val) && fhead != NULL)
        {
            
            ftail -> next = l2;
            l2 = l2 -> next;
            ftail = ftail -> next;
        }
        
        
    }
    
    
    while(l1 != NULL)
    {
        ftail -> next = l1;
        l1 = l1 -> next;
        ftail = ftail -> next;
    }
    
    
     while(l2 != NULL)
    {
        ftail -> next = l2;
        l2 = l2 -> next;
        ftail = ftail -> next;
    }
    
    
    return fhead; 
    

    }
};


