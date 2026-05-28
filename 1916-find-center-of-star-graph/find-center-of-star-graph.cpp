class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();

        vector<int> res(n + 2, 0);
        for (int i = 0 ; i < edges.size() ; i++) {
            res[edges[i][0]] ++;
            res[edges[i][1]] ++;
        }

        for (int i = 0 ; i < res.size() ; i++) {
            if (res[i] > 1) return i;
        }
        return -1;
    }
};