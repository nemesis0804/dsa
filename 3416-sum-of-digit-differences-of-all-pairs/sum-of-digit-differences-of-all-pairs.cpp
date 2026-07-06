class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        int n=nums.size();
        int c=to_string(nums[0]).size();
        long long ans=0;
        for(int i=0;i<c;i++)
        {
            vector<int>hash(10,0);
            for(int x:nums)
            {
                string s=to_string(x);
                hash[s[i]-'0']++;

            }
            
            for(int p= 0; p < 10; p++)
            {
                for(int j = p+1; j < 10; j++)
                {
                    ans += 1LL * hash[p] * hash[j];
                }
            }

        }
        return ans;

        
    }
};