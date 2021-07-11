class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& v) {
        vector<int> ans;
        ans.push_back(1);
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> p;
        
        for(int i=0;i<v.size();i++)
        {
            p.push({v[i],{v[i],0}});
        }
        int prev=1;
        while(ans.size()<n)
        {
            pair<int,int> q;
            int a=p.top().first;
            q=p.top().second;
            int b=q.first;
            int c=q.second;
            p.pop();
            // cout<<a<<" "<<b<<" "<<c<<" ";
            if(a!=prev)
            {
                prev=a;
                ans.push_back(a);
            }
            p.push({b*ans[c+1],{b,c+1}});
            
        }
        return ans[n-1];
   

    }
};