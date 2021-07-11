class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& v, int t) {
        int n=v.size();
        int m=v[0].size();
        int a[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            a[i][0]=0;
        }
        for(int i=0;i<m+1;i++)
        {
            a[0][i]=0;
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                a[i][j]=v[i-1][j-1]+a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            }
        }
        int count=0;
        for(int x1=1;x1<n+1;x1++)
        {
            for(int x2=x1;x2<n+1;x2++)
            {
                
                for(int y1=1;y1<m+1;y1++)
                {
                    for(int y2=y1;y2<m+1;y2++)
                    {
                        int p=a[x2][y2]-a[x1-1][y2]-a[x2][y1-1]+a[x1-1][y1-1];
                        if(p==t)
                            count++;
                    }
                }
            }
        }
        return count;
    }
};