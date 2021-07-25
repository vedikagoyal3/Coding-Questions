class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& t) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> p;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        vector<int> ans;
        for(int i=0;i<t.size();i++)
        {
            p.push({t[i][0],{t[i][1],i}});
            
        }
        long long i=p.top().first;
        while(p.size()!=0 || q.size()!=0)
        {
           
               while(i>=p.top().first && p.size()>0)
               {
                   pair<int,int> s=p.top().second;
                   int a=p.top().first;
                   int b=s.first;
                   int c=s.second;
                   p.pop();
                   q.push({b,c});
               }

           
            if(q.size()!=0)
            {
                ans.push_back(q.top().second);
                i=i+q.top().first;
                q.pop();
            }
            else
            {
                i=p.top().first;
            }
        }
        return ans;
        
   
        
    }
};