class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& a) {
        int n=a.size();
        if(n<3)
            return 0;
        int i=0;
        int j=1;
        int d=a[1]-a[0];
        int count=0;
        while(j<n)
        {
            int d1=a[j]-a[j-1];
            if(d1==d)
            {
                j++;
            }
            else
            {
                if(j-i>=3)
                {
                   count+=(j-i-2)*(j-i-1)/2;
                    i=j-1;
                    d=d1;
                }
                else
                {
                    i=j-1;
                    d=d1;
                }
            }
        }
        if(j-i>=3)
            count+=(j-i-2)*(j-i-1)/2;
        return count;
    }
};