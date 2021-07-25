class Solution {
public:
    struct comp{
        bool operator()(pair<int,string>a,pair<int,string>b)
        {
            if(a.first==b.first)
        {
            if(a.second>b.second)
                return false;
            else
                return true;
        }
        else if(a.first>b.first)
        {
            return true;
        }
        else
            return false;
        }
    };
    vector<string> topKFrequent(vector<string>& v, int k) {
    priority_queue<pair<int,string>,vector<pair<int,string>>,comp> p;
        unordered_map<string,int> m;
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
        // while(p.size()!=0)
        // {
        //     cout<<p.top().first<<" "<<p.top().second<<endl;
        //     p.pop();
        // }
        vector<string> z;
       
        while(p.size()!=0)
        {
            
           z.push_back(p.top().second);
            p.pop();
            
 
        }
       
        reverse(z.begin(),z.end());
        return z;
        
     
        
        
    }
};