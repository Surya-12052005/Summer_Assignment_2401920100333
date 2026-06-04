// Matrix_Diagonal_Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            // Primary diagonal
            sum += mat[i][i];

            // Secondary diagonal                             //For n = 3:
            if (i != n - i - 1) {              //  i=0 ,     0 != 2  // true ,     
                sum += mat[i][n - i - 1];                 //   mat[0][2]; // 3
            }                                         // i=1 ,  1 != 1 // false
        }                                      //  i=2 ,    2 != 0 // true
                                                //  mat[2][0]; // 7
        return sum;
    }
};