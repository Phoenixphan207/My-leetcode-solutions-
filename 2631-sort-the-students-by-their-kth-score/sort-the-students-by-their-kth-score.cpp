class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int row = score.size();
        int col = score[0].size();

        for (int i = 0 ; i < row ; i++) {
            for (int j = i + 1 ; j < row; j++) {
                if (score[i][k] < score[j][k]) {
                    swap(score[i] , score[j]);
                }
            }
        }

        return score;
    }
};