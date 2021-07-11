class Solution {
public:
    int n;
    int sw;
    int dp[1001][1001];
    int solve(vector<vector<int>> a,int i,int x,int maxi)
    {
        if(i==n)
            return maxi;
        if(dp[i][x]!=-1)
            return dp[i][x];
        if(x+a[i][0]<=sw)
            return dp[i][x]=min(solve(a,i+1,x+a[i][0],max(maxi,a[i][1])),
                       maxi+solve(a,i+1,a[i][0],a[i][1]));
        else
            return dp[i][x]=maxi+solve(a,i+1,a[i][0],a[i][1]);
    }
    int minHeightShelves(vector<vector<int>>& books, int s) {
        n=books.size();
        sw=s;
        memset(dp,-1,sizeof(dp));
        return solve(books,0,0,0);
    }
};