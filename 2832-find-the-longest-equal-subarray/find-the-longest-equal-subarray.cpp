class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        
        int n=nums.size();
        int len=0;
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]].push_back(i);
        }
        
        for(auto it:mpp)
        {
            vector<int>&v=it.second;
            int l=0;
            for(int r=0;r<v.size();r++)
            {
                while(v[r]-v[l]-(r-l)>k)
                {
                    l++;
                }
                len=max(len,r-l+1);

            }

        }
        return len;
        
        

        
    }
};