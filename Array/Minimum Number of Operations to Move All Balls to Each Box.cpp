class Solution {
public:
    vector<int> minOperations(string s) {
        vector<int> v;
        for(int i=0;i<s.size();i++)
        {
            int sum=0;
            for(int j=0;j<s.size();j++)
            {
                if(i==j)
                    continue;
                if(s[j]=='1')
                {
                    sum+=abs(i-j);
                }
            }
            v.push_back(sum);
        }
        return v;
    }
};