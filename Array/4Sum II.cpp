class Solution {
public:
    int fourSumCount(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
        int n=a.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                m[c[i]+d[j]]++;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(m.find(0-(a[i]+b[j]))!=m.end())
                    count=count+m[0-(a[i]+b[j])];
            }
        }
        return count;
    }
};