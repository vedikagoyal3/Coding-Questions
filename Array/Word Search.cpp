class Solution {
public:
    
    bool dfs(vector<vector<char>>& g,string w,int i,int j,int count)
    {
        if(count==w.size())
            return true;
        if(i>=0 && i<g.size() && j>=0 && j<g[0].size() && g[i][j]==w[count])
        {
            char temp=g[i][j];
            g[i][j]=' ';
            bool found=dfs(g,w,i+1,j,count+1)
                ||dfs(g,w,i-1,j,count+1)
                ||dfs(g,w,i,j+1,count+1)
                ||dfs(g,w,i,j-1,count+1);
                
                g[i][j]=temp;
                
            return found;
        }
        return false;
    }
    
    bool exist(vector<vector<char>>& g, string w) {
        for(int i=0;i<g.size();i++)
        {
            for(int j=0;j<g[0].size();j++)
            {
                if(g[i][j]==w[0] && dfs(g,w,i,j,0))
                    return true;
            }
        }
        return false;
    }
};