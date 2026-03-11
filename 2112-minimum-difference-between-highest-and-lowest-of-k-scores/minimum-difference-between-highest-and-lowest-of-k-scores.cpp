class Solution {
public:
    int max_arr(vector<int> &a ) {
        int max_arr = a[0];
        for (int i = 0; i < a.size() ; i++) {
            if (max_arr < a[i]) {
                max_arr = a[i];
            }
        }
        return max_arr;
    }

    int min_arr(vector<int> &a) {
        int min_arr  = a[0];
        for (int i = 0; i < a.size() ; i++) {
            if (min_arr > a[i]) {
                min_arr = a[i];
            }
        }
        return min_arr;
    }
    int minimumDifference(vector<int>& nums, int k) {
        if (nums.size() == 1) return 0; 
        for (int i = 0; i < nums.size() ; i++) {
            for (int j = i+1 ; j< nums.size() ; j++){
                if (nums[i] > nums[j]) {
                    std::swap(nums[i] , nums[j]);
                }
            }
        }

        vector<int> a;
        a.push_back(nums[0]);
        int left = 0;
        int ans = max_arr(nums) - min_arr(nums);
        for (int right = 1 ; right < nums.size() ; right ++) {
            a.push_back(nums[right]);
            if (a.size() < k) continue;

            if (a.size() == k) {
                int max_curr = max_arr(a);
                int min_curr = min_arr(a);
                int d = max_curr - min_curr;
                ans = min(ans , d);
            }
                

            while (a.size() > k) {
                auto it = find(a.begin(), a.end(), nums[left]);
                if (it != a.end()) {
                    a.erase(it);
                }
                left++;
            }

            int max_curr = max_arr(a);
            int min_curr = min_arr(a);
            int d = max_curr - min_curr;
            ans = min(ans , d);
            

        }
        return ans;
    }
};