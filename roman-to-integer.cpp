class Solution {
public:
    int romanToInt(string s) {
        map<char,int> charMap;
        charMap['I']=1;
        charMap['V']=5;
        charMap['X']=10;
        charMap['L']=50;
        charMap['C']=100;
        charMap['D']=500;
        charMap['M']=1000;
        int maxVal=0;
        int res=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            int t=charMap[s[i]];
            if(t>=maxVal)
            {
                maxVal=t;
                res+=t;
            }
            else
            {
                res-=t;
            }
        }
        return res;
    }
};