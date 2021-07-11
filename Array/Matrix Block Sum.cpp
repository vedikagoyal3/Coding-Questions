class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        dp[1][1]=mat[0][0];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(i==1 && j==1)
                    continue;
                else if(i==1)
                    dp[i][j]=dp[i][j-1]+mat[i-1][j-1];
                else if(j==1)
                    dp[i][j]=dp[i-1][j]+mat[i-1][j-1];
                else 
                {
                    dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+mat[i-1][j-1];
                }
            }
        }
        int l,r,u,d;
        vector<vector<int>> ans(n,vector<int>(m));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                l=max(1,j-k);
                r=min(m,j+k);
                u=max(1,i-k);
                d=min(n,i+k);
                
                ans[i-1][j-1]=dp[d][r]-dp[d][l-1]-dp[u-1][r]+dp[u-1][l-1];
                
            }
        }
        return ans;
    }
};