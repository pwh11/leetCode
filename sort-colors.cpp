class Solution {
public:
    void sortColors(int A[], int n) {
         for(int i =0 ; i< n-1; ++i) {  
        for(int j = 0; j < n-i-1; ++j) {  
            if(A[j] > A[j+1])  
            {  
                int tmp = A[j] ; A[j] = A[j+1] ;  A[j+1] = tmp;  
            }  
        }  
        }  
    }
};