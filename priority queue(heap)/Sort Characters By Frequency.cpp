class Solution {
public:
    string frequencySort(string s) {
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
        while(p.size()!=0)
        {
            int a=p.top().first;
            char z=p.top().second;
            p.pop();
            for(int i=0;i<a;i++)
                ans.push_back(z);
            
        }
        return ans;
    }
};