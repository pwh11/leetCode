class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(k&&i>=0&&j>=0)
        {
            if(A[i]<B[j])
            {
                A[k]=B[j];
                j--;
            }
            else
            {
                A[k]=A[i];
                i--;
            }
            k--;
        }
        while(j>=0)
        {
            A[j]=B[j];
            j--;
        }
    }
};