
class Solution {
public:
    string makeLargestSpecial(string s) {
        return solve(s);
        
    }
    string solve(string s)
    {
        vector<string>specials;
        int start=0;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            sum=(s[i]=='1')?sum+=1:sum-=1;
            if(sum==0)
            {
                string inner=s.substr(start+1,i-start-1);
                string n=solve(inner);
                specials.push_back("1"+n+"0");
                start=i+1;
                
            }
        
        }
        sort(specials.begin(),specials.end(),greater<string>());
        string ans;
        for(auto it:specials)
        {
           ans+=it;
        }
        return ans;

    }
};