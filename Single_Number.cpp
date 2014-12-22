/*************************************************************************
    > File Name: Single_Number.cpp
    > Author: pwh1
    > Mail: buptlijun@163.com
    > Created Time: Wed 30 Apr 2014 09:36:07 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
class Solution
{
	public:
		int singleNumber(int A[], int n)
		{
			int r=0,i=0;
			for(i=0;i<n;i++)
				r^=A[i];
			return r;
		}
};
int main(void)
{
	int n;
	cin>>n;
	int *A=new int[n];
	for(int i=0;i<n;i++)
        cin>>A[i];
	Solution s;
	cout<<s.singleNumber(A,n)<<endl;
	return 0;
}

