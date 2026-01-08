class Solution {
public:
    bool tuchia(int n) {
        int t=0;
        string s= to_string (n);
        for (int i=0; i<s.size(); i++) {
            if (s[i] == '0') 
                return false; 
            else{
            if (n % (s[i] - '0') ==0)
                t++;
            }
        }
        if (t == s.size()) 
            return true;
        else return false;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> a;
        for (int i= left; i<= right; i++) {
            if (tuchia(i) == true) 
                a.push_back(i);
        }
        return a;
    }
};