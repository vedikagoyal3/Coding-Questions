class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> p;
        p.push({2,2,0});
        p.push({3,3,0});
        p.push({5,5,0});
        int prev=1;
        vector<int> ans;
        ans.push_back(1);
        while(ans.size()!=n)
        {
            vector<int> m=p.top();
            int a=m[0];
            int b=m[1];
            int c=m[2];
            p.pop();
            if(a!=prev)
            {
                prev=a;
                ans.push_back(a);
            }
            p.push({b*ans[c+1],b,c+1});
        }
        return ans[n-1];
    }
};





















