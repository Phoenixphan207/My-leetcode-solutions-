class Solution {
public:
    int count(string a) {
        int d = 0;
        for (int i = 0; i < a.length() ; i++) {
            if (a[i] == '1') d ++;
        }
        return d;
    }
    int numberOfBeams(vector<string>& bank) {
        if (bank.empty() || bank.size() == 1) return 0;

        vector<int> tmp;
        for (string i: bank) {
            if (count(i) != 0) tmp.push_back(count(i));
        }
        if (tmp.empty()) return 0;
        int d = 0;
        for (int i = 0 ; i < tmp.size() - 1 ; i++) {
            d += tmp[i] * tmp[i+1];
        }
        return d;
    }
};
