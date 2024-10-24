class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int len = mat[0].size();
        int sum = 0;
        for(int i=0, j=len-1; i<len && j>=0; i++, j--)
        {
            sum += mat[i][i];
            if (i != len-i-1) {
                sum += mat[i][len- i- 1];
            }
        }
        return sum;
    }
};
