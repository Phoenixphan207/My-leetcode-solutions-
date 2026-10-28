class Solution {
public:
    int reverseDegree(string s) {
        int d = 0;
        for (int i = 0 ; i < s.length(); i++) {
            d += (123 - int(s[i])) * (i+1);
        }
        return d;
    }
};