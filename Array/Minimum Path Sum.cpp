class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int dp[n][m];
        dp[0][0]=grid[0][0];
        int i=0;
        for(int j=1;j<m;j++)
        {
            dp[i][j]=grid[i][j]+dp[i][j-1];
        }
        int j=0;
        for(int i=1;i<n;i++)
        {
            dp[i][j]=grid[i][j]+dp[i-1][j];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n-1][m-1];
    }
};