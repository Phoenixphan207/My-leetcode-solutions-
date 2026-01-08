class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        else {
        set<int> a;
        for (int x : nums) {
            a.insert(x);
        }
        vector<int> s;
        for (int i : a) {
            s.push_back(i);
        }
        int curr = 1;
        int maxs = 1;
        for (int i = 1 ; i <s.size() ; i++) {
            if (s[i] == s[i-1] + 1) {
                curr += 1;
            }
            else if (s[i] -s[i-1] != 1){
                curr = 1;
            }
            maxs = max(maxs , curr);
        }
        return maxs;
        }
    }
};
