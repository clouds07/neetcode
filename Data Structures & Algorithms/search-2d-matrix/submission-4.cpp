class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int x = 0, t = 0, b = matrix.size() - 1;
        int y = 0, l = 0, r = matrix[0].size() - 1;

        while (t <= b) {
            x = t + (b - t) / 2;
            if (matrix[x][matrix[0].size() - 1] < target) {
                t = x + 1;
            } else if (matrix[x][0] > target) {
                b = x - 1;
            } else {
                break;
            }
        }

        while (l <= r) {
            y = l + (r - l) / 2;
            if (matrix[x][y] < target) {
                l = y + 1;
            } else if (matrix[x][y] > target) {
                r = y - 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
