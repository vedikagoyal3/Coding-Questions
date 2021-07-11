class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& v) {
        if(v.size()==1)
            return v;
        unordered_map<int,int> m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        priority_queue<pair<int,int>> p;
        for(auto x:m)
        {
            p.push({x.second,x.first});
        }
        vector<int> ans;
        while(p.size()>1)
        {
            int a=p.top().first;
            int b=p.top().second;
            ans.push_back(b);
            a--;
            p.pop();
            int c=p.top().first;
            int d=p.top().second;
            ans.push_back(d);
            c--;
            p.pop();
            if(a>0)
                p.push({a,b});
            if(c>0)
                p.push({c,d});
        }
        if(p.size()==1)
            ans.push_back(p.top().second);
        return ans;
   
    }
};