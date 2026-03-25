class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        unordered_set<char> tmp;
        
        int left = 0;
        int d = 1;
        tmp.insert(s[0]);
        for (int right = 1; right < s.length() ; right++) {
            while (tmp.find(s[right]) != tmp.end()) {
                    tmp.erase(s[left]);
                    left ++;
            }
            
            tmp.insert(s[right]);
            d = max(d , right - left + 1);
        }
        return d;
    }
};
