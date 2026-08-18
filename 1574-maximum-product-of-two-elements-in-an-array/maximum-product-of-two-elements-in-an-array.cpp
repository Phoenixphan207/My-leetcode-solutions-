class Solution {
public:
    // int partition(vector<int> &a , int left , int right) {
    //     int pivot = a[right];
    //     int i = left - 1;

    //     for (int j = left ; j < right ; j++) {
    //         if (a[j] < pivot) {
    //             i ++;
    //             swap(a[i] , a[j]);
    //         }
    //     }
    //     swap(a[i+1], a[right]);
    //     return i+1;
    // }

    // void 
    int maxProduct(vector<int>& nums) {
        std::sort(nums.begin() , nums.end());
        return (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);
    }
};