class Solution {
public:
vector<vector<int>>t;
    int minDifficulty(vector<int>& jobDifficulty, int d) {
         t.assign(301, vector<int>(11, -1));
        int n=jobDifficulty.size();
        if(n<d)return -1;
        return solve(0,n,d,jobDifficulty);
        
    }
    
    int solve(int ind,int n,int d,vector<int>&job)
    {
        int maxd=INT_MIN;
        int finalresult=INT_MAX;
        if(d==1)return *max_element(job.begin()+ind,job.end());
        if(t[ind][d]!=-1)return t[ind][d];
        for(int i=ind;i<=n-d;i++)
        {
            maxd=max(maxd,job[i]);
            int res=maxd+solve(i+1,n,d-1,job);
            finalresult=min(finalresult,res);

            
            
        }
        return t[ind][d]=finalresult;
    }
};