class Solution {
public:
    int scoreOfString(string s) {
        int d = 0;
        for (int i = 0 ; i < s.length() - 1 ; i++) 
        {   
            d += abs(s[i] - s[i+1]);
        }
        return d;
    }
};