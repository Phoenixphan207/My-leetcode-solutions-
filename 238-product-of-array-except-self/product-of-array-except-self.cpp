class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        vector<int> sau(n);
        int d = 1;
        pre[0] = 1;
        for (int i = 1 ; i < n ; i++) {
            d *= nums[i - 1];
            pre[i] = d;
        }
        int t = 1;
        sau[n-1] = 1;
        for (int i = n-2; i >= 0; i--){
            t *= nums[i + 1];
            sau[i] = t;
        }
        vector<int> a;
        for (int i = 0; i< n; i++) {
            a.push_back(pre[i]*sau[i]);
        }
        return a;
    }
};
