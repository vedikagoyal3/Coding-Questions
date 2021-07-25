class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        priority_queue<int,vector<int>,greater<int>> p;
        for(int i=0;i<v.size();i++)
        {
            p.push(v[i]);
            if(p.size()>k)
                p.pop();
            
        }
        return p.top();
    }
};