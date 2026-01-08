class Solution {
public:
    int lengthOfLastWord(string s) {
        int t=0;
        int n= s.size()-1;
        while ( n>=0 && s[n] == ' ')
        {
            n -- ;

        }
        for (int i=n; i>=0; i--){
            if (s[i] != ' ') {
                t++;
            }
            else break;
        }
        return t;
    }
};