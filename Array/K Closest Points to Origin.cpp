class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& v, int k) {
        priority_queue<pair<int,pair<int,int>>> p;
        for(int i=0;i<v.size();i++)
        {
            int a=v[i][0]*v[i][0]+v[i][1]*v[i][1];
            p.push({a,{v[i][0],v[i][1]}});
            if(p.size()>k)
                p.pop();
            
        }
        vector<vector<int>> ans;
        while(p.size()!=0)
        {
            pair<int,int> y=p.top().second;
            vector<int> s;
            s.push_back(y.first);
            s.push_back(y.second);
            p.pop();
            ans.push_back(s);
        }
        return ans;
        
  
        
    }
};