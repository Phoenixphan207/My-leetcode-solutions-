class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<vector<int>> a(n-2, vector<int>(n-2, 0));

        for (int row = 0; row <= n -3 ; row ++) {
            for (int col = 0; col <= n-3; col ++) {
                int max_a = 0;
                for (int i = row; i <= row + 2; i++) {
                    for (int j = col; j <= col + 2; j++) {
                        if (grid[i][j] > max_a) {
                            max_a = grid[i][j];
                        }
                    }
                }
                a[row][col] = max_a;
                
            }
        }
        return a;
    }
};