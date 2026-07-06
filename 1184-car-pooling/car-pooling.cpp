class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int,int>>ds;
        for(auto it:trips)
        {
            int cap=it[0];
            int from=it[1];
            int to=it[2];
            ds.push_back({from,cap});
            ds.push_back({to,-1*cap});
        }
        sort(ds.begin(),ds.end());
        int seats=0;
        for(auto it:ds)
        {
            
            int pass=it.second;
            seats+=pass;
            if(seats>capacity)return false;
        }
        return true;
        
    }
};