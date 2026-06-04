// Reshape_The_Matrix
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();         // there are 2 rows.
        int n = mat[0].size();     // there are 2 columes.

        // Check whether reshape is possible.
        if (m * n != r * c) {                      //m = number of rows in original matrix
            return mat;                            //r = desired number of rows
        }

        vector<vector<int>> result(r, vector<int>(c));

        for (int idx = 0; idx < m * n; idx++) {
            result[idx / c][idx % c] = mat[idx / n][idx % n];
        }

        return result;
    }
};