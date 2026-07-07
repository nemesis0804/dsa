class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string nw="";
        long long sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')continue;
            nw+=char(s[i]);
            sum+=s[i]-'0';


        }
        long long x=0;
        if(nw=="")x=0;
        else
        x=stoi(nw);
        return 1ll *sum*x;

        
        
        
    }
};