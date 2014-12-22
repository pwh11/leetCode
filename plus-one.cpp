class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        vector<int> res;
        stack<int> tmp;
        bool exFlag=true;
        bool firstFlag=true;
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            int t=digits[i];
            if(exFlag)
            {
                if(t==9)
                {
                    tmp.push(0);
                }
                else
                {
                    tmp.push(t+1);
                    exFlag=false;
                }
            }
            else
            {
                tmp.push(t);
            }
        }
        
        if(exFlag)
        {
            tmp.push(1);
        }
        
        while(!tmp.empty())
        {
            res.push_back(tmp.top());
            tmp.pop();
        }
       
        return res;
    }
};