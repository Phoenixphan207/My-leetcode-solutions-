class Solution {
public:
    int wavi(int a) {
        int d = 0;
        string s = to_string(a);
        for (int i = 1 ; i < s.length()-1; i++) {
            if ((s[i] > s[i-1] && s[i] > s[i+1]) || (s[i] < s[i-1] && s[i] < s[i+1])) {
                d++;
            }
        }
        return d;
    }
    int totalWaviness(int num1, int num2) {
        int d = 0;
        for (int i = num1 ; i <= num2; i++) {
            d += wavi(i);
        }
        return d;
    }
};