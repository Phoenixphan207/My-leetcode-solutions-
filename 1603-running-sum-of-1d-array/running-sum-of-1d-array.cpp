class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = 0;
        n = nums.size();
        vector<int> a;
        for (int i =0; i<n; i++) {
            if (i == 0) a.push_back(nums[0]);
            else a.push_back(nums[i] + a[i-1]);
        }
    return a;
    }
};