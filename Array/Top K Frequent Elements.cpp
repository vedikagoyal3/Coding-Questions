class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
        unordered_map<int,int> m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        for(auto x:m)
        {
            p.push({x.second,x.first});
            if(p.size()>k)
                p.pop();
            
        }
        vector<int> ans;
        while(p.size()!=0)
        {
            ans.push_back(p.top().second);
            p.pop();
            
        }
        return ans;

        
    }
};