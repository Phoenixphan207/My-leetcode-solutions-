class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        if (nums.empty()) return 0;

        int d = 0;
        for (int i = 0; i < nums.size() ; i++) {
            for (int j = i+1; j < nums.size() ; j++){
                if (nums[i] + nums[j] < target) {
                    d ++;
                }
            }
        }
        return d;
    }   

};