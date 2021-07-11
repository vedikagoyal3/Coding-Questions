class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        unordered_map<int,int> m;
        for(int i=0;i<a.size();i++)
            m[a[i]]++;
        for(auto x:m)
        {
            if(x.second==1)
                return x.first;
        }
        return 0;
    }
};