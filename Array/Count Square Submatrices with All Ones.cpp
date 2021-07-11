class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        
        int dp[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=mat[i][j];
                else
                {
                    if(mat[i][j]==0)
                        dp[i][j]=0;
                    else
                        dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                }
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
               
                sum=sum+dp[i][j];
            }
        
        return sum;
    }
};