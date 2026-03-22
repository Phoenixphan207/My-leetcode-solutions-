class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string r = "";
        vector<string> s;
        for (auto& i : nums) {
            s.push_back(to_string(i));
        }

        for (int i = 0 ; i < s.size() ; i++) {
            for (int j = i + 1 ; j < s.size() ; j++) {
                if ((s[i] + s[j]) < (s[j] + s[i])) {
                    std::swap(s[i] , s[j]);
                }
            }
        }

        for (auto& i : s) { 
            r+= i;
        }
        
        if (r[0] == '0')  r = '0';
        return r;
    }
};