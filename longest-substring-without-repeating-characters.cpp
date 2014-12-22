class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
		map<char,int> charMap;
		int l=0,i=0,maxL=0,find=0;
		int pos=0;
		for(i=0;i<s.size();i++)
		{
			find=charMap[s[i]];
			if(find>pos)
			{
				if(l>maxL)
					maxL=l;
				l=i-find;
				pos=find;
			}
				charMap[s[i]]=i+1;
				l++;
		}
		if(l>maxL)
			maxL=l;
		return maxL;
    }
};