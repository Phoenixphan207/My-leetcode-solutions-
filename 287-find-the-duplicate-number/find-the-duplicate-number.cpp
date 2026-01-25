class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        multiset<int> res;

        for (auto i : nums) {
            res.insert(i);
            if (res.count(i) != 1) {
                return i ;
            }
        }
        return -1;
    }
};
