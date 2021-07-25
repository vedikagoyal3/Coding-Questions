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
};