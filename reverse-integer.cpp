class Solution {
public:
    int reverse(int x) {
		double res=0;
		int symBol=x>0?1:-1;
        int t=x*symBol;
		stack<int> stk;
		while(t>9)
		{
			stk.push(t%10);
			t=t/10;
		}
		stk.push(t);
		
		double n=1;
		while(!stk.empty())
		{
			res+=stk.top()*n;
			n*=10;
			stk.pop();
		}
		res=symBol*res;
		if(res>INT_MAX||res<INT_MIN)
			res=0;
		return res;
		
    }
};