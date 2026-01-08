class Solution {
public:
    bool checkPerfectNumber(int n) {
        int t=0;
        int i=1;
        while (i<n) {
            if (n%i ==0) 
                t+=i;
            i++;
        }
        if (t==n) 
            return true;
        else return false;
    }
};