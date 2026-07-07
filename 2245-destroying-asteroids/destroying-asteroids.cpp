class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
                sort(asteroids.begin(), asteroids.end());

        long long cur = mass;

        for (int ast : asteroids) {
            if (cur < ast)
                return false;

            cur += ast;
        }

        return true;

    }
};