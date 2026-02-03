class Solution {
public:
    long long mySqrt(int x) {
        long long left = 1;
        long long right = x;

        while (left <= right) {
            long long curr = (left + right) /2 ;
            if (curr > x/curr) {
                right = curr - 1;
            }
            if (curr <  x/curr) {
                left = curr + 1;
            }
            if (curr  ==  x/curr) {
                return curr;
            }
        }
        return left - 1;;
    }
};