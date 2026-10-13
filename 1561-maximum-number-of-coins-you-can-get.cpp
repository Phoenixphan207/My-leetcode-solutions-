class Solution {
public:
    int maxCoins(vector<int>& piles) {
        if (piles.empty()) return 0;

        sort(piles.begin() , piles.end());

        int res = 0;
        int left = 0;
        int right = piles.size() - 2;

        while (left < right) {
            res += piles[right];
            right -= 2;
            left ++;
        }
        return res;
    }
};