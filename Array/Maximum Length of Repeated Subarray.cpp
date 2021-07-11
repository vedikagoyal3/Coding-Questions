class Solution {
public:
    int findLength(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        int res=0;
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(a[i-1]==b[j-1])
                {dp[i][j]=1+dp[i-1][j-1];
                res=max(res,dp[i][j]);
                }
                else
                    dp[i][j]=0;
            }
            
        }
        return res;
    }
};