class Solution {
public:

    int solve(int i,int j,string &s, string &t,int n1,int n2,vector<vector<int>> &dp)
    {
        if(i>n1 || j>n2)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s[i]==t[j])
            return dp[i][j] = 1+solve(i+1,j+1,s,t,n1,n2,dp);
        else
            return dp[i][j] = max(solve(i+1,j,s,t,n1,n2,dp),solve(i,j+1,s,t,n1,n2,dp));
    }

    int longestCommonSubsequence(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        vector<vector<int>>dp (n1,vector<int>(n2,-1));
        return solve(0,0,s,t,n1-1,n2-1,dp);
    }
};
