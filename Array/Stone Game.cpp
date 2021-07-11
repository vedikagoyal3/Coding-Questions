class Solution {
public:
  
    // int dp[501][501];
    // int solve(vector<int> v,int i,int j)
    //     {
    //         if(i>j)
    //             return 0;
    //     if(dp[i][j]!=-1)
    //         return dp[i][j];
    //     int a1=v[i]+min(solve(v,i+1,j-1),solve(v,i+2,j));
    //     int a2=v[j]+min(solve(v,i+1,j-1),solve(v,i,j-2));
    //     return dp[i][j]=max(a1,a2);
    //     }
    
    bool stoneGame(vector<int>& v) {
   
//         int n=v.size();
//         int sum=accumulate(v.begin(),v.end(),0);
//         memset(dp,-1,sizeof(dp));
//        int a=solve(v,0,n-1);
//         int b=sum-a;
        // cout<<a<<" "<<b;
        // if(a>b)
            return true;
        // return false;
    }
};