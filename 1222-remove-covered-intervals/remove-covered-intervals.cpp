class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        auto lambda=[](vector<int>v1,vector<int>v2)
        {
            if(v1[0]==v2[0])
            {
                return v1[1]>v2[1];
            }
            return v1[0]<v2[0];
        };
        sort(intervals.begin(),intervals.end(),lambda);
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        int n=intervals.size();
        for(int i=1;i<n;i++)
        {
            if(ans.back()[0]<=intervals[i][0] && ans.back()[1]>=intervals[i][1])
            {
                continue;
            }
            ans.push_back(intervals[i]);

        }
        return ans.size();

    }
};