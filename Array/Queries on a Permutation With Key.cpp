class Solution {
public:
    vector<int> processQueries(vector<int>& q, int m) {
        vector<int> v;
        vector<int> ans;
        for(int i=0;i<m;i++)
        {
            v.push_back(i+1);
        }
        for(int i=0;i<q.size();i++)
        {
            int x=q[i];
            int a=0;
            int p=0;
            while(1)
            {
                if(x==v[p])
                {
                    a=p;
                    break;
                }
                p++;
            }
            ans.push_back(a);
            v.erase(v.begin()+a);
            v.insert(v.begin(),x);
            
        }
        return ans;
    }
};