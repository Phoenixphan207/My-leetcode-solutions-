class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> res;
        
        for (int left = 0 ; left < order.size() ; left ++) {
            for (int right = 0; right < friends.size() ; right++) {
                if (order[left] == friends[right]) {
                    res.push_back(order[left]);
                }
            }
        }
        return res;
    }
};