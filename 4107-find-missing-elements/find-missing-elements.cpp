class Solution {
public:
    int max_arr(vector<int> &nums) {
        int max = nums[0];
        for (int i = 1 ;i < nums.size() ; i++) {
            if (max < nums[i]) max = nums[i];
        }
        return max;
    }
    int min_arr(vector<int> &nums) {
        int max = nums[0];
        for (int i = 1 ;i < nums.size() ; i++) {
            if (max > nums[i]) max = nums[i];
        }
        return max;
    }

    bool check(vector<int> & a , int k ) {
        for (int i = 0 ; i < a.size() ; i++) {
            if (a[i] == k) return true;
        }
        return false;
    }

    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        if (nums.empty()) return res;

        int max_a = max_arr(nums);
        int min_a = min_arr(nums);

        for (int i = min_a ; i <= max_a ; i++) {
            if (!check(nums , i)) res.push_back(i);
        }
        
        return res;
    }
};