class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int dp[n][m+2];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m+2;j++)
            {
                if(j==0 || j==m+1)
                    dp[i][j]=INT_MAX;
                else if(i==0)
                    dp[i][j]=mat[i][j-1];
                else 
                {
                    dp[i][j]=mat[i][j-1]+min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1]));
                }
            }
        }
        int i=n-1;
        int ans=INT_MAX;
        for(int j=1;j<m+1;j++)
            ans=min(ans,dp[i][j]);
        return ans;
            
    }
};