class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        int n1,n2,n3,n4;
        int l=s.size();
        vector<string> result;
        string str;
        if(l<4||l>12)
            return result;
        int num;
        for(n1=1;n1<=3&&n1<=l-3;n1++)
        {
            string str1=s.substr(0,n1);
            stringstream ss(str1);
            ss>>num;
            if(num>255)
                break;
			if(str1.size()>1&&str1[0]=='0')
				break;
            for(n2=1;n2<=3&&n1+n2<=l-2;n2++)
            {
                string str2=s.substr(n1,n2);
                stringstream ss(str2);
                ss>>num;
                if(num>255)
                    break;
				if(str2.size()>1&&str2[0]=='0')
				break;
                for(n3=1;n3<=3&&n1+n2+n3<=l-1;n3++)
                {
                    string str3=s.substr(n1+n2,n3);
                    stringstream ss(str3);
                    ss>>num;
                    if(num>255)
                        break;
					if(str3.size()>1&&str3[0]=='0')
						break;

					if((n4=l-n1-n2-n3)>3)
						continue;                    
					string str4=s.substr(n1+n2+n3,n4);
                    stringstream ss2(str4);
                    ss2>>num;
                    if(num>255)
                        continue;
					if(str4.size()>1&&str4[0]=='0')
						continue;
                    str=str1+"."+str2+"."+str3+"."+str4;
                    result.push_back(str);
                }
            }
        }
        return result;
    }
};