class Solution {
public:
    vector<int> getMaximumXor(vector<int>& v, int n) {
        int ans=v[0];
        for(int i=1;i<v.size();i++)
        {
            ans=ans^v[i];
        }
        vector<int> s;
        int x=pow(2,n);
        s.push_back(ans^(x-1));
        for(int i=v.size()-2;i>=0;i--)
        {
            ans=ans^v[i+1];
            int a=ans^(x-1);
            s.push_back(a);
        }
        return s;
    }
};