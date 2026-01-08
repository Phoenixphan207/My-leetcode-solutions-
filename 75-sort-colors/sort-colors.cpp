class Solution {
public:
    void sortColors(vector<int>& nums) {
        int d1 = 0;
        int d2 = 0;
        int d3 = 0;
        int n = nums.size();
        for (int i =0; i<n ;i++) {
            if (nums[i] == 0) d1++;
            if (nums[i] == 1) d2++;
            if (nums[i] == 2) d3++;
        }
        for (int i = 0 ; i<d1; i++) {
            nums[i] = 0;
        }
        for (int i = d1; i<d2+d1; i++) {
            nums[i] = 1;
        }
        for (int i = d2+d1; i<d3+d2+d1; i++) {
            nums[i] = 2;
        }
        for (int i =0; i<n ;i++) {
            cout << nums[i] <<",";
        }
    }
};