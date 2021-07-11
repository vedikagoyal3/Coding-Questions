class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& a) {
        sort(a.begin(),a.end());
        if(a[0]!=1)
            a[0]=1;
        for(int i=1;i<a.size();i++)
        {
            if(abs(a[i]-a[i-1])>1)
            {
                a[i]=a[i-1]+1;
            }
        }
        return a[a.size()-1];
             
             
           
    }
};