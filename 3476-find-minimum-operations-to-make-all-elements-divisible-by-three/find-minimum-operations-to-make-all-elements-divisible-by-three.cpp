class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int d = 0;
        for (int i : nums) {
            if (i % 3 != 0) {
                d += min(i % 3 , 3 - i%3);
            }
        }
        return d;
    }
};