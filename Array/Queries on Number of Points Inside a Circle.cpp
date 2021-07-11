class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        vector<int> ans;
        for(int i=0;i<q.size();i++)
        {
            int x1=q[i][0];
            int y1=q[i][1];
            int r=q[i][2];
            int count=0;
            for(int j=0;j<p.size();j++)
            {
                int x2=p[j][0];
                int y2=p[j][1];
                if(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))<=r*r)
                    count++;
            }
            ans.push_back(count);
            
        }
        return ans;
    }
};