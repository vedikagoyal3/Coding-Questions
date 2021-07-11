class Solution {
public:
    int chalkReplacer(vector<int>& c, int k) {
        unsigned long long sum=0;
        for(int i=0;i<c.size();i++)
        {
            sum+=c[i];
        }
        int a=k%sum;
        sum=0;
        for(int i=0;i<c.size();i++)
        {
            sum+=c[i];
            if(sum>a)
            {
                return i;
            }
        }
        return -1;
    }
};