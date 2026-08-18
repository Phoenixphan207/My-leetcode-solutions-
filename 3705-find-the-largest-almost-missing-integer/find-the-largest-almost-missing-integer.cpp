class Solution {
public:
    int max(vector<int> &nums) {
        if (nums.empty()) return -1;

        int ans = nums[0];
        for (int i = 1; i < nums.size() ; i++) {
            if (nums[i] > ans) 
                ans = nums[i];
        }

        return ans;
    }

    int counting(vector<int> &nums , int k) {
        int d = 0;
        for (int i = 0 ; i < nums.size() ; i++) {
            if (k == nums[i]) {
                d ++;
            }
        }
        return d;
    }

    int largestInteger(vector<int>& nums, int k) {
        if (nums.empty()) return -1;

        if (k == 1) {
            int max_ans = -1;
            for (int i = 0 ; i < nums.size(); i++) {
                int a = counting(nums, nums[i]);
                if (a == 1){
                    max_ans = std::max(max_ans , nums[i]);
                }    
            }
            return max_ans;
        }
        if (k == nums.size()) return max(nums);

        if (k > 1 && k < nums.size()) {
            int a1 = counting(nums , nums[0]);
            int a2 = counting(nums , nums[nums.size() - 1]);

            if (a1 == 1 && a2 == 1) {
                int ans = nums[0] > nums[nums.size() - 1] ? nums[0]:nums[nums.size() - 1];
                return ans;
            }
            if (a1 == 1 && a2 != 1) {
                return nums[0];
            }
            if (a1 != 1 && a2 == 1) {
                return nums[nums.size() - 1];
            }
            if (a1 != 1 && a2 != 1) { 
                return -1;
            }
        }
        return -1;
    }
};