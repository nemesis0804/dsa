class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int c=0;
        int left=0;
        vector<int>f(3,0);
        for(int right=0;right<n;right++)
        {
            f[s[right]-'a']++;
            while(f[0]>0 && f[1]>0 && f[2]>0)
            {
                c+=n-right;
                f[s[left]-'a']--;
                left++;
            }
            
        }
        return c;
        
       

        
    }
};