class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& v) {
        map<int,int> m;
        int n=v.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int s=v[i][0];
            int e=v[i][1];
            m[s]=i;
        }
         for(int i=0;i<n;i++)
        {
            int s=v[i][0];
            int e=v[i][1];
            if(m.find(e)!=m.end())
            {
                ans.push_back(m[e]);
                continue;
            }
             else
             {
                 auto x=m.upper_bound(e);
                 if(x!=m.end())
                 {
                     ans.push_back(x->second);
                 }
                 else
                     ans.push_back(-1);
             }
        }
        return ans;
        
          
                
    
    }
};class Solution {
public:
    
    
    void dfs(vector<vector<char>>& g,int x,int y)
    { 
        if(x>=0 && x<g.size() && y>=0 && y<g[0].size() && g[x][y]=='1')
        {
            g[x][y]='0';
            dfs(g,x+1,y);
            dfs(g,x-1,y);
            dfs(g,x,y+1);
            dfs(g,x,y-1);
        } 
       
    }
        
        
    int numIslands(vector<vector<char>>& g) {
         int n=g.size();
        int m=g[0].size();
    
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(g[i][j]=='1')
               {
                   count++;
                   dfs(g,i,j);
               }
            }
        }
        return count;
    }
};