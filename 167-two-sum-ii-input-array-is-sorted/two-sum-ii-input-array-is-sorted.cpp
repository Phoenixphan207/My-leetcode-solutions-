class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1  ;
        while ( left < right ) {
            int mid = numbers[left] + numbers[right];
            if (mid == target) {
                return {left+1, right+1} ;
            }
            if (mid > target ) {
                right --;
            }
            if (mid < target) {
                left ++ ;
            }
        }
        int t = left + 1;
        int r = right + 1;
        return {t,r};
    }
};