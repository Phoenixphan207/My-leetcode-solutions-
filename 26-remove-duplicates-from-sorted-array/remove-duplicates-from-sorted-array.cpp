class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        int n = nums.size();
        int right = 1;

        while (right < n)  {
            if (nums[left] == nums[right] ) {
                for (int j = right ; j < n-1 ; j++) {
                    nums[j] = nums[j+1];
                }
                n--;
            }
            else {
                left ++;
                right ++;
            }
        }

        int d = 0;
        for (int i  =0 ; i < n ; i++) {
            d ++;

        }
        return d;
    }
};