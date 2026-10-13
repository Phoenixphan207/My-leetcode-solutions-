class Solution {
public:
    int digit_num(int n , int x) {
        int res = 0;

        while (n != 0) {
            int p = n % 10;
            n /= 10;

            if (p == x) res += 1;
        }

        return res;
    }

    int countDigitOccurrences(vector<int>& nums, int digit) {
        int res = 0;

        for (int i : nums) {
            res += digit_num(i , digit);
        }

        return res;
    }
};