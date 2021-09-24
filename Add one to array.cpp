#include <iostream>
#include<vector>
using namespace std;

vector<int> Solution::plusOne(vector<int> &A) {

     
        int size = A.size() - 1;
        
        
        for(int i = size; i >= 0; i--)
        {
            if(A[i] < 9)
            {
                A[i]++;
                return A;
            }

            A[i] = 0;
        }
        
        A[0] = 1;
        A.push_back(0);
        return A;
        
}    

