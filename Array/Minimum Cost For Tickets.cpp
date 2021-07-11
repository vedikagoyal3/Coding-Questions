class Solution {
public:
    int n;
    int dp[500][500];
    int solve(vector<int> c,vector<int> d,int i,int k)
    {
        if(i>=n)
            return 0;
        if(dp[i][k]!=-1)
            return dp[i][k];
        if(d[i]>k)
        {
            return dp[i][k]=min(c[0]+solve(c,d,i+1,d[i]),
                                min(c[1]+solve(c,d,i+1,d[i]+6),c[2]+solve(c,d,i+1,d[i]+29)));
        }
        else
            return dp[i][k]=solve(c,d,i+1,k);
    }
    int mincostTickets(vector<int>& d, vector<int>& c) {
        int N=d.size();
        n=N;
        memset(dp,-1,sizeof(dp));
        return solve(c,d,0,0);
    }
};