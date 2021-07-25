class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>> p;
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(auto x:m)
        {
            p.push({x.second,x.first});
            
        }
        string ans;
        while(p.size()>=2)
        {
            int f1=p.top().first;
            char c1=p.top().second;
            ans.push_back(c1);
            p.pop();
            f1--;
            int f2=p.top().first;
            char c2=p.top().second;
            ans.push_back(c2);
            p.pop();
            f2--;
            if(f1>0)
                p.push({f1,c1});
            if(f2>0)
                p.push({f2,c2});
                 
                
        }
        if(p.size()==1)
        {
           int f=p.top().first;
            if(f==1)
            {
                ans.push_back(p.top().second);
            }
            else
            {
                ans="";
            }
        }
        return ans;
  
        
        
    }
};





















