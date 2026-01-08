class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_prs = prices[0];
        int max_prs = 0;
        for (int price : prices) {
            min_prs = min(min_prs , price);
            // cout << min_prs << " " ;
            max_prs = max(max_prs , price - min_prs);
        }
        return max_prs;
    }
};
