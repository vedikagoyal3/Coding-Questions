class Solution {
public:
    int kthSmallest(vector<vector<int>>& v, int k) {
        priority_queue<int> p;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                p.push(v[i][j]);
                if(p.size()>k)
                {
                    p.pop();
                }
            }
        }
        return p.top();
        
    }
};