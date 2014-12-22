class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> stk;
        for(int i=1;i<=n;i++)
            stk.push_back(i);
        string str;
        while(n)
        {
            int nFac=factorial(n-1);
            int pos=ceil((double)k/nFac);
            char buf[2];
            sprintf(buf,"%d",stk[pos-1]);
            str+=buf;
            stk.erase(stk.begin()+pos-1);
            k-=(pos-1)*nFac;
            n--;
        }
        return str;
    }
    
    int factorial(int n)
    {
        if(n==1||n==0)
            return 1;
        return n*factorial(n-1);
    }
};