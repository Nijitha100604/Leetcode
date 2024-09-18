class Solution {
public:

    bool isToeplitz(vector<vector<int>>& matrix, int row, int col)
    {
        int num = matrix[row][col];
        for(int i=row+1, j=col+1; i<matrix.size() && j<matrix[0].size(); i++,j++)
        {
            if(matrix[i][j] != num)
                return false;
        }
        return true;
    }

    bool isToeplitzMatrix(vector<vector<int>>& matrix) {

        if (matrix.empty() || matrix[0].empty())
        {
            return true;
        }
        for(int i =matrix.size()-1;i>=0; i--)
        {
            if(!isToeplitz(matrix,i,0))
                return false;
        }
        for(int i =1;i<matrix[0].size(); i++)
        {
            if(!isToeplitz(matrix,0,i))
                return false;
        }
        return true;
    }
};
