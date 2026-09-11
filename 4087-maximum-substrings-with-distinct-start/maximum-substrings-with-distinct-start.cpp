class Solution {
public:
    int maxDistinct(string s) {
        set<char> tmp;
        for (int i = 0; i < s.length() ; i++) {
            tmp.insert(s[i]);
        }

        return tmp.size();
    }
};