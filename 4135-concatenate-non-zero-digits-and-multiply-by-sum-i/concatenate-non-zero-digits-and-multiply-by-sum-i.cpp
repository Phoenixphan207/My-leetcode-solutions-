class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);

        string res = "";
        int d = 0;
        for (int i = 0 ; i < s.length() ; i++) {
            if (s[i] != '0') {
                res += s[i];
                d += s[i] - '0';
            }
        }

        long long tmp = 0;
        for (int i = 0 ; i < res.length() ; i++) {
            tmp += (res[i] - '0') * pow(10, res.length() - i - 1);
        }
        
        return tmp * d;
    }
};