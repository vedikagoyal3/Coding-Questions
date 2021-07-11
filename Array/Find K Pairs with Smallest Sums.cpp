class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& n1, vector<int>& n2, int k) {
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> p;
        int vis[n1.size()][n2.size()];
        memset(vis,0,sizeof(vis));
        int i=0,j=0;
        int count=0;
        vector<vector<int>> ans;
        p.push({n1[0]+n2[0],0,0});
        vis[0][0]=1;
        while(count<k && p.size()>0)
        {
            
            vector<int> m=p.top();
            p.pop();
            vector<int> l;
            l.push_back(n1[m[1]]);
            l.push_back(n2[m[2]]);
            ans.push_back(l);
            count++;
            i=m[1];
            j=m[2];
           
            j++;
            
            if(j<n2.size() && vis[i][j]==0)
            {
               
                p.push({n1[i]+n2[j],i,j});
              
                vis[i][j]=1;
            }
            j--;
            i++;
            if(i<n1.size() && vis[i][j]==0)
            {
                p.push({n1[i]+n2[j],i,j});
                vector<int> m=p.top();
             
                vis[i][j]=1;
            }
        }
        
        return ans;
    
        
    }
};