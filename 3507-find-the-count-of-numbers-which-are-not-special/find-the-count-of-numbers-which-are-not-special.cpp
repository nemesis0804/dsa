class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int lim=sqrt(r);
        vector<bool>p(lim+1,true);
        p[0]=false;
        p[1]=false;
        for(int i=2;i*i<=lim;i++)
        {
            for(int j=i*i;j<=lim;j+=i)
            {
                if(p[i])
                {
                    p[j]=false;
                }
            }
        }
        int sp=0;
        for(int i=2;i<=lim;i++)
        {
            if(p[i])
            {
                if(i*i>=l && i*i<=r)sp++;
            }
        }
        return r-l+1-sp;

       
        
    }
};