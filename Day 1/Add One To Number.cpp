#include <iostream>
#include<vector?
using namespace std;


void reverse(vector<int> &A){

    int i = 0, j = A.size() - 1;

    while(i <= j){
        
        swap(A[i], A[j]);
        i++;
        j--;
}

return;

}

void removeZeroes(vector<int> &A) {

reverse(A);

while(A[A.size() - 1] == 0){
    A.pop_back();
}

reverse(A);

}


vector<int> Solution::plusOne(vector<int> &A) {

     
        int size = A.size() - 1;
        
        
        for(int i = size; i >= 0; i--)
        {
            if(A[i] < 9)
            {
                A[i]++;
                removeZeroes(A);
                return A;
            }

            A[i] = 0;
        }
        
        A[0] = 1;
        A.push_back(0);
        removeZeroes(A);
        return A;
        
}    

