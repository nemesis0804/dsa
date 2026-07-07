class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int m = primes.size();

        vector<long long> dp(n);
        dp[0] = 1;

        vector<int> idx(m, 0);

        for (int i = 1; i < n; i++) {

            long long mini = LLONG_MAX;

            // Find next ugly number
            for (int j = 0; j < m; j++) {
                mini = min(mini, dp[idx[j]] * 1LL * primes[j]);
            }

            dp[i] = mini;

            // Move all pointers producing the minimum
            for (int j = 0; j < m; j++) {
                if (dp[idx[j]] * 1LL * primes[j] == mini)
                    idx[j]++;
            }
        }

        return dp[n - 1];

        
    }
};