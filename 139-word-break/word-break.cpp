class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>st;
        for(auto it:wordDict)
        {
            st.insert(it);
        }
        int n=s.size();
        vector<int>dp(n,-1);
        return solve(0,s,st,n,dp);
        
        
    }
    bool solve(int ind,string s,unordered_set<string> &st,int n,vector<int> &dp)
    {
        string temp="";
        if(ind==n)return true;
        if(dp[ind]!=-1)return dp[ind];
        if(st.find(s)!=st.end())return true;
        for(int i=1;i<=n;i++)
        {
            temp=s.substr(ind,i);
            if(st.find(temp)!=st.end() && solve(ind+i,s,st,n,dp))return dp[ind]=true;
        }
        return dp[ind]=false;
    }
};