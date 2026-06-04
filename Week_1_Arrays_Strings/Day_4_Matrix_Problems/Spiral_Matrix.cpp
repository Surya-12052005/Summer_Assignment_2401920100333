// Spiral_Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        
        int rowStart = 0;
        int rowEnd = matrix.size() - 1;
        int colStart = 0;
        int colEnd = matrix[0].size() - 1;

        while (rowStart <= rowEnd && colStart <= colEnd) {

            // ➡ Top row
            for (int i = colStart; i <= colEnd; i++) {
                ans.push_back(matrix[rowStart][i]);
            }
            rowStart++;

            // ⬇ Right column
            for (int i = rowStart; i <= rowEnd; i++) {
                ans.push_back(matrix[i][colEnd]);
            }
            colEnd--;

            // ⬅ Bottom row
            if (rowStart <= rowEnd) {
                for (int i = colEnd; i >= colStart; i--) {
                    ans.push_back(matrix[rowEnd][i]);
                }
                rowEnd--;
            }

            // ⬆ Left column
            if (colStart <= colEnd) {
                for (int i = rowEnd; i >= rowStart; i--) {
                    ans.push_back(matrix[i][colStart]);
                }
                colStart++;
            }
        }

        return ans;
    }
};