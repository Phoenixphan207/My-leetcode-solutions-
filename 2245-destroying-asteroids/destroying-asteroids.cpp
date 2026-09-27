class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        if (asteroids.empty()) return 1;
        
        sort(asteroids.begin() , asteroids.end());
        long long res = mass;
        for (int i : asteroids) {
            if (res < i ) return false;
            res += i;
        }
        return true;
        }
};