#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    
    int nextGreater(vector<int> &nums2, int i, int num){
        
        int ans = num;
        
        if(i >= nums2.size()){
            return -1;
        }
        
        for(int start = i; start < nums2.size(); start++){
           if(nums2[start] > ans){
               ans = nums2[start];
               break;
           } 
        }
        
        if(ans == num){
            return -1;
        }
        
        return ans;
        
    }
    
    
    int findVal(vector<int> &nums2, int num){
        
        int index; 
        
        for(int i = 0; i < nums2.size(); i++){
            if(nums2[i] == num){
                index = i;
                break;
            }
        }
        
        return index;
    }
    
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> output;
        
        for(int i = 0; i < nums1.size(); i++){
            
            int index = findVal(nums2, nums1[i]);
            int element = nextGreater(nums2, index + 1, nums1[i]);
            output.push_back(element);
        }
        
        return output;
    }
    
};
