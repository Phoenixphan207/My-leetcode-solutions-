/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if (n ==1) return 1;

        int left = 1;
        long long right = n;
        while( left <= right){
            long long mid = left +(right - left) /2;
            if (guess(mid) == -1) {
                right = mid - 1;
            }
            if (guess(mid) == 1) {
                left = mid + 1;
            }
            if (guess(mid) == 0){
                return mid;
            }
        }
        return 1;
    }
};