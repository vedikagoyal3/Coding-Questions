class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& q, vector<int>& k) {
        vector<vector<int>> v(8);
        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
                v[i].push_back(0);
        for(int i=0;i<q.size();i++)
        {
           int a=q[i][0];
            int b=q[i][1];
            v[a][b]=1;
        }
        vector<vector<int>> ans;
        int n=k[0];
        int m=k[1];
        while(m>=0)
        {
            
            if(v[n][m]==1)
            {
                vector<int> h;
                h.push_back(n);
                h.push_back(m);
                ans.push_back(h);
                break;
            }
            m--;
        }
        n=k[0];
        m=k[1];
        while(m<8)
        {
           
            if(v[n][m]==1)
            {
                vector<int> h;
                h.push_back(n);
                h.push_back(m);
                ans.push_back(h);
                break;
            }
            m++;
        }
         n=k[0];
        m=k[1];
        while(n>=0)
        {
        
            if(v[n][m]==1)
            {
                vector<int> h;
                h.push_back(n);
                h.push_back(m);
                ans.push_back(h);
                break;
            }
            n--;
        }
         n=k[0];
        m=k[1];
        while(n<8)
        {
          
            if(v[n][m]==1)
            {
                vector<int> h;
                h.push_back(n);
                h.push_back(m);
                ans.push_back(h);
                break;
            }
            n++;
        }
         n=k[0];
       m=k[1];
        while(n>=0 && m>=0)
        {
            
            if(v[n][m]==1)
            {
                vector<int> h;
                h.push_back(n);
                h.push_back(m);
                ans.push_back(h);
                break;
            }
            n--;m--;
        }
         n=k[0];
         m=k[1];
        while(n<8 && m<8)
        {
           
            if(v[n][m]==1)
            {
                vector<int> h;
                h.push_back(n);
                h.push_back(m);
                ans.push_back(h);
                break;
            }
            n++;m++;
        }
         n=k[0];
       m=k[1];
        while(n>=0 && m<8)
        {
           
            if(v[n][m]==1)
            {
                vector<int> h;
                h.push_back(n);
                h.push_back(m);
                ans.push_back(h);
                break;
            }
            n--;m++;
        }
          n=k[0];
        m=k[1];
        while(n<8 && m>=0)
        {
           
            if(v[n][m]==1)
            {
                vector<int> h;
                h.push_back(n);
                h.push_back(m);
                ans.push_back(h);
                break;
            }
            n++;m--;
        }
        return ans;
    }
};