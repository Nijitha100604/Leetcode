class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> m;
        int n = grid.size();
        vector<int> res(2);
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<(grid[0].size()); j++)
            {
                m[grid[i][j]]++;
            }
        }

        for(int i=1; i<=n*n ; i++)
        {
            if(m[i]==0)
                res[1] = i;
            else if(m[i] > 1)
                res[0] = i;
        }
        return res;
    }
};
