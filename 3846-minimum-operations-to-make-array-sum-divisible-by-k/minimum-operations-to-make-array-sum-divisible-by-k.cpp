class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        if (nums.empty()) return 0;

        int t = 0;
        for (int i : nums) {
            t += i;
        }
        return t%k;
    }
};