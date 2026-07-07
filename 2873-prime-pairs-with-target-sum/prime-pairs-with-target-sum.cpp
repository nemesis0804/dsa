class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>>ans;
        vector<bool>p(n+1,true);
        p[0]=false;
        p[1]=false;
        for(int i=2;i*i<=n;i++)
        {
            if(p[i])
            {
            for(int j=i*i;j<=n;j+=i)
            {
                if(j%i==0)p[j]=false;
            }
            }
        }
        for(int i=2;i<=n/2;i++)
        {
            if(p[i] && p[n-i])
            {
                ans.push_back({i,n-i});
            }
            
            
        }
        return ans;



        
    }
};