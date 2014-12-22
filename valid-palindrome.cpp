class Solution {
public:
    bool isPalindrome(string s) {
		transform(s.begin(), s.end(), s.begin(), ::toupper);
        int l=s.size();
        int t=l;
        if(l<=1)
            return true;
        int i=0;
        int j=l-1;
        while(t>1)
        {
            if(!((s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')))
            {
                i++;
                t--;
                continue;
            }
			if(!((s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')))
            {
                j--;
                t--;
                continue;
            }
            if(s[i]!=s[j])
                return false;
			i++;
			j--;
			t=t-2;
        }
		if(i==j-1)
			return false;
        return true;
    }
};