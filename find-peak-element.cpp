class Solution {
public:
    int findPeakElement(const vector<int> &num) {
        int length=num.size();
        if(length==1)
            return 0;
        if(num[0]>num[1])
        {
            return 0;
        }
        
        if(num[length-1]>num[length-2])
        {
            return length-1;
        }
            
        for(int i=1;i<num.size()-1;i++)
        {
            if(num[i]>num[i-1]&&num[i]>num[i+1])
                return i;
            
        }
    }
};