class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int dp[n][m];
        for(int i=0;i<n;i++)
        {
            dp[i][m-1]=mat[i][m-1];
            for(int j=m-2;j>=0;j--)
            {
                if(mat[i][j]==0)
                    dp[i][j]=0;
                else
                {
                    dp[i][j]=dp[i][j+1]+1;
                }
            }
        }
    
//         for(int i=0;i<n;i++)
//         {
            
//             for(int j=0;j<m;j++)
//             {
//                 cout<<dp[i][j]<<" ";
//             }
//         }
        int count=0;
        // cout<<endl;
        for(int k=0;k<n;k++)
        { for(int j=0;j<m;j++)
        {
            int mini=INT_MAX;
            for(int i=k;i<n;i++)
            {
                if(dp[i][j]==0)
                    break;
               mini=min(mini,dp[i][j]);
                  // cout<<mini<<" ";
                 count+=mini;
            }
        }
        }
        return count;
    }
};