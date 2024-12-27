class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> answer(matrix.size(), vector<int>(matrix[0].size()));
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<(matrix[0].size()); j++)
            {
                if(matrix[i][j]!=-1)
                    answer[i][j] = matrix[i][j];
                else
                {
                    int max = -1;
                    for(int k=0; k<matrix.size(); k++)
                    {
                        if(matrix[k][j]>max)
                            max = matrix[k][j];
                    }
                    answer[i][j] = max;
                }
            }
        }
        return answer;

    }
};
