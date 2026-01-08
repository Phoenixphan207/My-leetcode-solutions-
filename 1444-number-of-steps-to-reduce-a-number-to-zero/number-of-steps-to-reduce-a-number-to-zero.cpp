class Solution {
public:
    int numberOfSteps(int num) {
        int d =0;
        while (num != 0) {
            d++;
            if (num % 2 ==0) {
                num /= 2;
            }
            else {
                num --;
            }
            
        }
        return d ;
    }
};