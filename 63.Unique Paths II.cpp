class Solution {
public:

    int solve(int i, int j, int m,int n,vector<vector<int>>& dp,vector<vector<int>>& G )
    {
        if(i==m-1 && j==n-1 && G[i][j]!=1)
            return 1;
        if(i>=m || j>=n || G[i][j] == 1)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        else
            return dp[i][j] = solve(i+1,j,m,n,dp,G)+solve(i,j+1,m,n,dp,G);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& G) {
        int m = G.size();
        int n = G[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(0,0,m,n,dp,G);
    }
};
