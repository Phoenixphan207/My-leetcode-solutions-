class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        if (matrix[0][0] == target) return true;

        int d = 0;
        for (int i = 0 ; i < row - 1 ; i++) {
            if (target > matrix[i][0] && target < matrix[i+1][0]) {
                d = i;
            }
            else if (target > matrix[i+1][0]) {
                d = i+1;
            }
            else if (target == matrix[i][0] || target == matrix[i+1][0]) return true;
        }

        int right = col - 1;
        int left = 0;

        while (left <= right){
            int mid = (left  + right)/2;
            if (matrix[d][mid] < target) {
                left = mid + 1;
            }
            if (matrix[d][mid] > target) {
                right = mid - 1;
            }
            else if (matrix[d][mid] == target) {
                return true;
            }
        }
        return 0;
    }
};
